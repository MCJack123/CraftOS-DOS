#undef __STRICT_ANSI__
#include "term.h"
#include <lua.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdio.h>
#include <math.h>
#include <sys/time.h>
#include <signal.h>

// for some reason IntelliSense doesn't know what size_t is, even though it's defined in lua.h
#ifdef __INTELLISENSE__
typedef unsigned long size_t;
#endif

#define TERM_HEIGHT 25
#define TERM_WIDTH 40
unsigned short current_colors = 0xF000;
int cursorX = 0, cursorY = 0;
int cursorBlink = 1, cursorShow = 1;
short video;
unsigned short * screen = (unsigned short*)0xB8000;

const uint32_t palette[16] = {
    0xf0f0f0,
    0xf2b233,
    0xe57fd8,
    0x99b2f2,
    0xdede6c,
    0x7fcc19,
    0xf2b2cc,
    0x4c4c4c,
    0x999999,
    0x4c99b2,
    0xb266e5,
    0x3366cc,
    0x7f664c,
    0x57a64e,
    0xcc4c4c,
    0x111111
};

void redrawCursor() {
    if (cursorX < 0 || cursorX >= TERM_WIDTH || cursorY < 0 || cursorY >= TERM_HEIGHT) return;
    /*if (cursorShow) {
        for (int i = 0; i < 4; i++) {
            outp(0x3C4, 0x02);
            outp(0x3C5, 1 << i);
            if (cursorX % 2) {
                _farpokew(video, cursorY * 1440 + (uintptr_t)(cursorX * 1.5) + 1280, _farpeekw(video, cursorY * 1440 + (uintptr_t)(cursorX * 1.5) + 1280) & 0x00F0);
                _farpokew(video, cursorY * 1440 + (uintptr_t)(cursorX * 1.5) + 1360, _farpeekw(video, cursorY * 1440 + (uintptr_t)(cursorX * 1.5) + 1360) & 0x00F0);
            } else {
                _farpokew(video, cursorY * 1440 + (uintptr_t)(cursorX * 1.5) + 1280, _farpeekw(video, cursorY * 1440 + (uintptr_t)(cursorX * 1.5) + 1280) & 0x0F00);
                _farpokew(video, cursorY * 1440 + (uintptr_t)(cursorX * 1.5) + 1360, _farpeekw(video, cursorY * 1440 + (uintptr_t)(cursorX * 1.5) + 1360) & 0x0F00);
            }
        }
    }*/
}

void cursorTimer(int sig) {
    if (cursorBlink) {
        cursorShow = !cursorShow;
        redrawCursor();
    }
}

void termInit() {

}

void termClose() {

}

int term_write(lua_State *L) {
    if (cursorY < 0 || cursorY >= TERM_HEIGHT || cursorX >= TERM_WIDTH) return 0;
    size_t len;
    const char * str = lua_tolstring(L, 1, &len); 
    //printf("writing %d %s\n", len, str);
    for (int x = cursorX, i = 0; i < len && x < TERM_WIDTH; x++, i++) {
        if (x < 0) continue;
        screen[cursorY*TERM_WIDTH+x] = str[i] | current_colors;
    }
    //if (cursorX + len > 0) blit_line(cursorY, cursorX > 0 ? cursorX : 0, cursorX + len >= TERM_WIDTH ? TERM_WIDTH - 1 : cursorX + len - 1);
    //if (cursorX >= 0 && cursorX < TERM_WIDTH && cursorY >= 0 && cursorY < TERM_HEIGHT) blit_line(cursorY, cursorX, cursorX);
    cursorX += len;
    redrawCursor();
    return 0;
}

int term_scroll(lua_State *L) {
    int scroll = lua_tointeger(L, 1);
    if (scroll >= TERM_HEIGHT || -scroll >= TERM_HEIGHT) {
        // scrolling more than the height is equivalent to clearing the screen
        memset(screen, 0, TERM_WIDTH * TERM_HEIGHT * 2);
    } else if (scroll > 0) {
        memmove(screen, screen + scroll * TERM_WIDTH, (TERM_HEIGHT - scroll) * TERM_WIDTH * 2);
        memset(screen + (TERM_HEIGHT - scroll) * TERM_WIDTH, 0, scroll * TERM_WIDTH * 2);
    } else if (scroll < 0) {
        memmove(screen - scroll * TERM_WIDTH, screen, (TERM_HEIGHT + scroll) * TERM_WIDTH * 2);
        memset(screen, 0, -scroll * TERM_WIDTH * 2);
    }
    //blit_screen();
    return 0;
}

int term_setCursorPos(lua_State *L) {
    //if (cursorX >= 0 && cursorX < TERM_WIDTH && cursorY >= 0 && cursorY < TERM_HEIGHT) blit_line(cursorY, cursorX, cursorX);
    cursorX = lua_tointeger(L, 1)-1;
    cursorY = lua_tointeger(L, 2)-1;
    redrawCursor();
    return 0;
}

int term_setCursorBlink(lua_State *L) {
    cursorBlink = cursorShow = lua_toboolean(L, 1);
    redrawCursor();
    return 0;
}

int term_getCursorPos(lua_State *L) {
    lua_pushinteger(L, cursorX+1);
    lua_pushinteger(L, cursorY+1);
    return 2;
}

int term_getSize(lua_State *L) {
    lua_pushinteger(L, TERM_WIDTH);
    lua_pushinteger(L, TERM_HEIGHT);
    return 2;
}

int term_clear(lua_State *L) {
    memset(screen, 0, TERM_WIDTH * TERM_HEIGHT * 2);
    //blit_screen();
    return 0;
}

int term_clearLine(lua_State *L) {
    if (cursorY < 0 || cursorY >= TERM_HEIGHT) return 0;
    memset(&screen[cursorY*TERM_WIDTH], 0, TERM_WIDTH * 2);
    //blit_line(cursorY, 0, TERM_WIDTH-1);
    return 0;
}

int term_setTextColor(lua_State *L) {
    current_colors = (current_colors & 0xF000) | (((int)log2(lua_tointeger(L, 1)) & 0x0F) << 8);
    return 0;
}

int term_setBackgroundColor(lua_State *L) {
    current_colors = (current_colors & 0x0F00) | ((((int)log2(lua_tointeger(L, 1)) << 4) & 0xF0) << 8);
    return 0;
}

int term_isColor(lua_State *L) {
    lua_pushboolean(L, 1);
    return 1;
}

int term_getTextColor(lua_State *L) {
    lua_pushinteger(L, 1 << ((current_colors & 0x0F00) >> 8));
    return 1;
}

int term_getBackgroundColor(lua_State *L) {
    lua_pushinteger(L, 1 << (current_colors >> 12));
    return 1;
}

int hexch(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    else if (c >= 'a' && c <= 'f') return c - 'a' + 10;
    else return -1;
}

int term_blit(lua_State *L) {
    size_t len, blen, flen;
    const char * str = lua_tolstring(L, 1, &len);
    const char * fg = lua_tolstring(L, 2, &flen);
    const char * bg = lua_tolstring(L, 3, &blen);
    if (len != flen || flen != blen) {
        lua_pushstring(L, "arguments must be the same length");
        lua_error(L);
    }
    for (int x = cursorX, i = 0; i < len && x < TERM_WIDTH; x++, i++) {
        if (x < 0) continue;
        screen[cursorY*TERM_WIDTH+x] = str[i] | (hexch(fg[i]) << 8) | (hexch(bg[i]) << 12);
    }
    //if (cursorX + len > 0) blit_line(cursorY, cursorX > 0 ? cursorX : 0, cursorX + len >= TERM_WIDTH ? TERM_WIDTH - 1 : cursorX + len - 1);
    //if (cursorX >= 0 && cursorX < TERM_WIDTH && cursorY >= 0 && cursorY < TERM_HEIGHT) blit_line(cursorY, cursorX, cursorX);
    cursorX += len;
    redrawCursor();
    return 0;
}

int term_getPaletteColor(lua_State *L) {
    int color = log2(lua_tointeger(L, 1));
    lua_pushnumber(L, (palette[color] & 0xFF) / 255.0);
    lua_pushnumber(L, ((palette[color] >> 8) & 0xFF) / 255.0);
    lua_pushnumber(L, ((palette[color] >> 24) & 0xFF) / 255.0);
    return 3;
}

int term_setPaletteColor(lua_State *L) {
    return 0;
}

const char * term_keys[23] = {
    "write",
    "scroll",
    "setCursorPos",
    "setCursorBlink",
    "getCursorPos",
    "getSize",
    "clear",
    "clearLine",
    "setTextColour",
    "setTextColor",
    "setBackgroundColour",
    "setBackgroundColor",
    "isColour",
    "isColor",
    "getTextColour",
    "getTextColor",
    "getBackgroundColour",
    "getBackgroundColor",
    "blit",
    "getPaletteColor",
    "getPaletteColour",
    "setPaletteColor",
    "setPaletteColour"
};

lua_CFunction term_values[23] = {
    term_write,
    term_scroll,
    term_setCursorPos,
    term_setCursorBlink,
    term_getCursorPos,
    term_getSize,
    term_clear,
    term_clearLine,
    term_setTextColor,
    term_setTextColor,
    term_setBackgroundColor,
    term_setBackgroundColor,
    term_isColor,
    term_isColor,
    term_getTextColor,
    term_getTextColor,
    term_getBackgroundColor,
    term_getBackgroundColor,
    term_blit,
    term_getPaletteColor,
    term_getPaletteColor,
    term_setPaletteColor,
    term_setPaletteColor
};

library_t term_lib = {"term", 23, term_keys, term_values};
