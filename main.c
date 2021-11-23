#include "lua/lauxlib.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

#include "bit.h"
#include "fs.h"
#include "os.h"
#include "term.h"
#include "redstone.h"
#include "queue.h"

#define CRAFTOSOS_VERSION "0.1"

extern lua_State* paramQueue;
extern queue_t eventQueue;
extern queue_t timerQueue;

const char * startup_str = "S\007t\007a\007r\007t\007i\007n\007g\007 \007C\007r\007a\007f\007t\007O\007S\007O\007S\007.\007.\007.\007";
const char * osos = "   ..------~~~--.__\n"
"  /               c~\\\n"
"  /             \\__ `\\\n"
"  |  /~~--__/  /'\\ ~~'\n"
" /'/'\\ |    | |`\\ \\_\n"
"`-))  `-))  `-)) `-))";

void luaHook(lua_State *L, lua_Debug *ar) {
    lua_getinfo(L, "nSl", ar);
    printf("calling %s (%s:%d) @ %d\n", ar->name, ar->short_src, ar->linedefined, ar->currentline);
}

int main() {
    int status;
    lua_State *L;
    lua_State *coro;
    eventQueue._back = NULL;
    eventQueue._front = NULL;
    timerQueue._back = NULL;
    timerQueue._front = NULL;
    //freopen("COM1", "w", stdout);
    /*
    memset((void*)0xB8000, 0, 4000);
    // for some reason just a straight memcpy breaks QEMU
    for (int i = 0; i < 10; i++) memcpy((void*)(0xB8000 + i*4), startup_str + i*4, 4);
    *(uint16_t*)0xB8028 = 0x072E;*/
start:
    printf("\n%s\n\n", osos);
    printf("Starting CraftOS-DOS...\n");
    /*
     * All Lua contexts are held in this structure. We work with it almost
     * all the time.
     */
    L = luaL_newstate();
    
    coro = lua_newthread(L);
    paramQueue = lua_newthread(L);
    
    luaL_openlibs(coro); /* Load Lua libraries */
    load_library(coro, bit_lib);
    load_library(coro, fs_lib);
    load_library(coro, os_lib);
    load_library(coro, rs_lib);
    lua_getglobal(coro, "redstone");
    lua_setglobal(coro, "rs");
    load_library(coro, term_lib);
    termInit();
    
    lua_pushstring(L, "bios.use_multishell=false");
    lua_setglobal(L, "_CC_DEFAULT_SETTINGS");
    lua_pushstring(L, "ComputerCraft 1.8 (CraftOS-DOS " CRAFTOSOS_VERSION ")");
    lua_setglobal(L, "_HOST");

    //lua_sethook(coro, luaHook, LUA_MASKCALL, 0);
    
    /* Load the file containing the script we are going to run */
    printf("Loading BIOS...\n");
    status = luaL_loadfile(coro, "bios.lua");
    if (status) {
        /* If something went wrong, error message is at the top of */
        /* the stack */
        const char * fullstr = lua_tostring(coro, -1);
        termClose();
        printf("Couldn't load BIOS: %s (%d)\n", fullstr, status);
        return 2;
    }
    
    /* Ask Lua to run our little script */
    status = LUA_YIELD;
    int narg = 0;
    printf("Running main coroutine.\n");
    while (status == LUA_YIELD && running == 1) {
        status = lua_resume(coro, narg);
        if (status == LUA_YIELD) {
            if (lua_isstring(coro, -1)) narg = getNextEvent(coro, lua_tostring(coro, -1));
            else narg = getNextEvent(coro, "");
        } else if (status != 0) {
            termClose();
            const char * fullstr = lua_tostring(coro, -1);
            printf("Errored: %s\n", fullstr);
            lua_close(L);
            return 1;
        }
        
    }
    printf("Closing session.\n");
    termClose();
    lua_close(L);   /* Cya, Lua */
    
    if (running == 2) {
        goto start;
    }
    return 0;
}
