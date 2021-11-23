/*  GIMP header image file format (INDEXED): /Users/jack/Downloads/CraftOS-PC_src/craftosos-includeos/font.h  */

static unsigned int width = 96;
static unsigned int height = 144;

/*  Call this macro repeatedly.  After each use, the pixel data can be extracted  */

#define HEADER_PIXEL(data,pixel) {\
pixel[0] = header_data_cmap[(unsigned char)data[0]][0]; \
pixel[1] = header_data_cmap[(unsigned char)data[0]][1]; \
pixel[2] = header_data_cmap[(unsigned char)data[0]][2]; \
data ++; }

static unsigned char header_data_cmap[256][3] = {
	{  0,  0,  0},
	{127,127,127},
	{127,127,127},
	{127,127,127},
	{127,127,127},
	{127,127,127},
	{127,127,127},
	{127,127,127},
	{127,127,127},
	{127,127,127},
	{127,127,127},
	{127,127,127},
	{127,127,127},
	{127,127,127},
	{127,127,127},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255}
	};
static char header_data[] = {
	0,0,0,0,0,0,0,15,15,15,0,0,0,15,15,15,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	15,15,15,15,15,15,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,15,15,15,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,15,0,0,0,15,0,15,15,15,15,
	15,0,0,15,0,15,0,0,0,0,15,0,0,0,0,15,
	15,15,0,0,0,0,15,0,0,0,0,0,0,0,0,0,
	15,15,15,15,15,15,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,15,15,15,0,15,0,0,0,15,0,0,0,
	0,0,0,0,0,15,15,15,15,0,0,15,15,15,15,15,
	0,0,0,0,0,0,15,15,0,15,15,0,15,0,15,0,
	15,0,15,15,15,15,15,0,0,15,15,15,0,0,0,0,
	15,0,0,0,0,15,15,15,0,0,0,0,15,15,0,0,
	15,15,0,0,15,15,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,15,15,0,15,0,0,0,15,0,0,0,
	0,0,0,0,0,15,0,0,15,0,0,15,0,0,0,15,
	0,0,0,0,0,0,15,0,0,0,15,0,15,15,15,15,
	15,0,15,15,15,15,15,0,15,15,15,15,15,0,15,15,
	15,15,15,0,15,15,15,15,15,0,0,15,15,15,15,0,
	15,0,0,0,0,15,0,0,0,0,0,0,0,0,0,0,
	0,0,0,15,15,0,15,0,15,0,0,0,15,0,0,0,
	0,0,0,0,0,15,15,15,15,0,0,15,15,15,15,15,
	0,0,0,0,0,0,15,0,15,0,15,0,15,0,0,0,
	15,0,15,15,15,15,15,0,0,15,15,15,0,0,15,15,
	15,15,15,0,15,15,15,15,15,0,0,15,15,15,15,0,
	15,0,0,0,0,15,0,0,0,0,0,0,0,0,0,0,
	0,0,15,0,0,15,0,0,0,15,15,15,0,0,0,0,
	0,0,0,0,0,15,0,0,0,0,0,15,0,0,0,15,
	0,0,0,0,0,0,15,0,0,0,15,0,15,15,0,15,
	15,0,0,15,15,15,0,0,0,0,15,0,0,0,0,0,
	15,0,0,0,0,0,15,0,0,0,0,0,15,15,0,0,
	15,15,0,0,15,15,0,0,0,0,0,0,0,0,0,0,
	0,0,15,0,0,15,0,0,0,0,15,0,0,0,0,0,
	0,0,0,0,15,15,0,0,0,0,15,15,0,0,15,15,
	0,0,0,0,0,0,0,15,15,15,0,0,0,15,15,15,
	0,0,0,0,15,0,0,0,0,0,0,0,0,0,0,15,
	15,15,0,0,0,15,15,15,0,0,0,0,0,0,0,0,
	15,15,15,15,15,15,0,0,0,0,0,0,0,0,0,0,
	0,0,0,15,15,0,0,0,0,15,15,15,0,0,0,0,
	0,0,0,0,15,15,0,0,0,0,15,15,0,0,15,15,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	15,15,15,15,15,15,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,15,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,0,
	0,0,0,15,0,0,15,0,0,15,15,15,15,0,0,15,
	15,15,15,0,0,0,0,0,0,0,0,0,15,0,0,0,
	0,0,15,0,0,0,0,0,15,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	15,0,0,0,0,0,0,0,0,0,15,0,0,15,15,15,
	0,0,0,15,0,0,15,0,15,0,15,0,15,0,15,15,
	0,0,0,0,0,0,0,0,0,0,0,15,15,15,0,0,
	0,15,15,15,0,0,0,0,15,0,0,0,0,0,15,0,
	0,0,0,0,15,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,15,0,0,0,15,15,15,15,15,0,
	15,15,15,0,0,0,0,0,15,15,15,0,15,15,15,15,
	15,0,0,15,0,0,15,0,15,0,15,0,15,0,15,0,
	15,15,0,0,0,0,0,0,0,0,15,15,15,15,15,0,
	15,15,15,15,15,0,0,0,15,0,0,0,0,0,15,15,
	0,0,0,15,15,0,0,0,0,0,0,0,0,0,0,15,
	0,0,15,0,0,0,15,0,0,0,0,15,15,15,0,0,
	15,15,15,15,15,0,15,15,15,15,15,0,0,0,15,0,
	0,0,0,15,0,0,15,0,0,15,15,0,15,0,15,0,
	0,0,15,0,0,0,0,0,0,0,0,0,15,0,0,0,
	0,0,15,0,0,0,0,0,15,0,0,0,15,15,15,15,
	15,0,15,15,15,15,15,0,0,0,0,0,0,0,15,15,
	15,15,15,15,0,15,15,15,0,0,0,15,15,15,0,0,
	15,15,15,0,0,0,0,0,15,15,15,0,0,0,15,0,
	0,0,0,15,0,0,15,0,0,0,15,0,15,0,0,15,
	15,0,15,0,0,0,0,0,0,0,15,15,15,15,15,0,
	0,0,15,0,0,0,15,15,15,15,15,0,0,0,15,15,
	0,0,0,15,15,0,0,0,15,0,0,0,0,0,0,15,
	0,0,15,0,0,15,15,15,0,0,0,0,15,0,0,0,
	15,0,0,0,0,0,0,0,0,0,15,0,15,15,15,15,
	15,0,0,0,0,0,0,0,0,0,15,0,15,0,0,0,
	0,15,15,0,0,15,15,15,15,0,0,15,15,15,0,0,
	0,0,15,0,0,0,0,15,15,15,0,0,0,0,15,0,
	0,0,0,0,15,0,0,0,15,0,0,0,0,0,0,0,
	0,0,0,0,15,15,15,15,15,0,0,0,15,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,15,15,15,
	0,0,0,15,0,0,15,0,0,0,15,0,15,0,15,15,
	15,15,0,0,0,15,15,15,15,0,0,0,15,0,0,0,
	0,0,15,0,0,0,0,0,15,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,15,15,15,15,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,15,15,15,15,15,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,0,0,0,0,0,15,0,
	15,0,0,15,0,15,0,0,0,0,15,0,0,0,15,0,
	0,0,15,0,0,0,15,0,0,0,0,0,0,15,0,0,
	0,0,0,15,15,0,0,15,15,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,0,
	0,0,0,0,0,0,0,0,15,0,0,0,0,0,15,0,
	15,0,0,15,0,15,0,0,0,15,15,15,15,0,15,0,
	0,15,0,0,0,15,0,15,0,0,0,0,0,15,0,0,
	0,0,15,0,0,0,0,0,0,15,0,0,0,0,0,0,
	0,0,0,0,15,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,15,0,0,
	0,0,0,0,0,0,0,0,15,0,0,0,0,15,0,15,
	0,0,15,15,15,15,15,0,15,0,0,0,0,0,0,0,
	0,15,0,0,0,0,15,0,0,0,0,0,15,0,0,0,
	0,15,0,0,0,0,0,0,0,0,15,0,0,15,0,0,
	15,0,0,0,15,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,15,0,0,
	0,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,
	0,0,0,15,0,15,0,0,0,15,15,15,0,0,0,0,
	15,0,0,0,0,15,15,0,15,0,0,0,0,0,0,0,
	0,15,0,0,0,0,0,0,0,0,15,0,0,0,15,15,
	0,0,15,15,15,15,15,0,0,0,0,0,0,0,15,15,
	15,15,15,0,0,0,0,0,0,0,0,0,15,0,0,0,
	0,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,
	0,0,15,15,15,15,15,0,0,0,0,0,15,0,0,15,
	0,0,0,0,15,0,15,15,0,0,0,0,0,0,0,0,
	0,15,0,0,0,0,0,0,0,0,15,0,0,15,0,0,
	15,0,0,0,15,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,15,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,15,0,15,0,0,15,15,15,15,0,0,0,15,
	0,0,15,0,15,0,0,15,0,0,0,0,0,0,0,0,
	0,0,15,0,0,0,0,0,0,15,0,0,0,0,0,0,
	0,0,0,0,15,0,0,0,0,0,15,0,0,0,0,0,
	0,0,0,0,0,0,15,0,0,0,0,15,0,0,0,0,
	0,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,
	0,0,0,15,0,15,0,0,0,0,15,0,0,0,15,0,
	0,0,15,0,0,15,15,0,15,0,0,0,0,0,0,0,
	0,0,0,15,15,0,0,15,15,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,15,0,0,0,0,0,
	0,0,0,0,0,0,15,0,0,0,15,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,15,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,15,15,15,0,0,0,0,15,0,0,0,0,15,15,15,
	0,0,0,15,15,15,0,0,0,0,0,15,15,0,15,15,
	15,15,15,0,0,0,15,15,0,0,15,15,15,15,15,0,
	0,15,15,15,0,0,0,15,15,15,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,15,0,0,0,
	0,0,0,0,0,15,0,0,0,0,0,15,15,15,0,0,
	15,0,0,0,15,0,0,15,15,0,0,0,15,0,0,0,
	15,0,15,0,0,0,15,0,0,0,15,0,15,0,15,0,
	0,0,0,0,0,15,0,0,0,0,15,0,0,0,15,0,
	15,0,0,0,15,0,15,0,0,0,15,0,0,0,15,0,
	0,0,0,0,15,0,0,0,0,0,0,15,0,0,0,0,
	0,0,0,0,0,0,15,0,0,0,15,0,0,0,15,0,
	15,0,0,15,15,0,0,0,15,0,0,0,0,0,0,0,
	15,0,0,0,0,0,15,0,0,15,0,0,15,0,15,15,
	15,15,0,0,15,0,0,0,0,0,0,0,0,0,15,0,
	15,0,0,0,15,0,15,0,0,0,15,0,0,0,15,0,
	0,0,0,0,15,0,0,0,0,0,15,0,0,0,15,15,
	15,15,15,0,0,0,0,15,0,0,0,0,0,0,15,0,
	15,0,15,0,15,0,0,0,15,0,0,0,0,0,15,15,
	0,0,0,0,15,15,0,0,15,0,0,0,15,0,0,0,
	0,0,15,0,15,15,15,15,0,0,0,0,0,15,0,0,
	0,15,15,15,0,0,0,15,15,15,15,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,15,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,0,0,0,0,15,0,0,
	15,15,0,0,15,0,0,0,15,0,0,0,0,15,0,0,
	0,0,0,0,0,0,15,0,15,15,15,15,15,0,0,0,
	0,0,15,0,15,0,0,0,15,0,0,0,15,0,0,0,
	15,0,0,0,15,0,0,0,0,0,15,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,15,0,0,0,0,0,
	0,0,0,0,0,0,0,15,0,0,0,0,15,0,0,0,
	15,0,0,0,15,0,0,0,15,0,0,0,15,0,0,0,
	15,0,15,0,0,0,15,0,0,0,0,0,15,0,15,0,
	0,0,15,0,15,0,0,0,15,0,0,0,15,0,0,0,
	15,0,0,0,15,0,0,0,0,15,0,0,0,0,15,0,
	0,0,0,0,15,0,0,0,0,0,0,15,0,0,15,15,
	15,15,15,0,0,0,15,0,0,0,0,0,0,0,0,0,
	0,15,15,15,0,0,15,15,15,15,15,0,15,15,15,15,
	15,0,0,15,15,15,0,0,0,0,0,0,15,0,0,15,
	15,15,0,0,0,15,15,15,0,0,0,0,15,0,0,0,
	0,15,15,15,0,0,0,15,15,0,0,0,0,0,15,0,
	0,0,0,0,15,0,0,0,0,0,0,0,15,0,0,0,
	0,0,0,0,0,15,0,0,0,0,0,0,15,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,15,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,15,15,15,15,0,0,15,15,15,0,0,15,15,15,15,
	0,0,0,15,15,15,0,0,15,15,15,15,0,0,15,15,
	15,15,15,0,15,15,15,15,15,0,0,15,15,15,15,0,
	15,0,0,0,15,0,0,15,15,15,0,0,0,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,0,0,15,0,
	0,0,15,0,15,0,0,0,15,0,0,15,15,15,0,0,
	15,0,0,0,0,15,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,15,0,
	0,0,0,0,15,0,0,0,0,0,15,0,0,0,0,0,
	15,0,0,0,15,0,0,0,15,0,0,0,0,0,0,0,
	15,0,15,0,0,15,0,0,15,0,0,0,0,0,15,15,
	0,15,15,0,15,15,0,0,15,0,15,0,0,0,15,0,
	15,0,15,15,0,15,15,15,15,15,15,0,15,15,15,15,
	0,0,15,0,0,0,0,0,15,0,0,0,15,0,15,15,
	15,0,0,0,15,15,15,0,0,0,15,0,0,15,15,0,
	15,15,15,15,15,0,0,0,15,0,0,0,0,0,0,0,
	15,0,15,15,15,0,0,0,15,0,0,0,0,0,15,0,
	15,0,15,0,15,0,15,0,15,0,15,0,0,0,15,0,
	15,0,15,15,0,15,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,0,0,15,0,0,0,15,0,15,0,
	0,0,0,0,15,0,0,0,0,0,15,0,0,0,15,0,
	15,0,0,0,15,0,0,0,15,0,0,0,0,0,0,0,
	15,0,15,0,0,15,0,0,15,0,0,0,0,0,15,0,
	0,0,15,0,15,0,0,15,15,0,15,0,0,0,15,0,
	15,0,15,15,15,15,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,0,0,15,0,0,0,15,0,15,0,
	0,0,0,0,15,0,0,0,0,0,15,0,0,0,15,0,
	15,0,0,0,15,0,0,0,15,0,0,0,0,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,0,0,15,0,
	0,0,15,0,15,0,0,0,15,0,15,0,0,0,15,0,
	15,0,0,0,0,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,15,0,
	0,0,0,0,15,0,0,0,0,0,15,0,0,0,15,0,
	15,0,0,0,15,0,0,0,15,0,0,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,0,0,15,0,
	0,0,15,0,15,0,0,0,15,0,15,0,0,0,15,0,
	0,15,15,15,15,0,15,0,0,0,15,0,15,15,15,15,
	0,0,0,15,15,15,0,0,15,15,15,15,0,0,15,15,
	15,15,15,0,15,0,0,0,0,0,0,15,15,15,0,0,
	15,0,0,0,15,0,0,15,15,15,0,0,0,15,15,15,
	0,0,15,0,0,0,15,0,15,15,15,15,15,0,15,0,
	0,0,15,0,15,0,0,0,15,0,0,15,15,15,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	15,15,15,15,0,0,0,15,15,15,0,0,15,15,15,15,
	0,0,0,15,15,15,15,0,15,15,15,15,15,0,15,0,
	0,0,15,0,15,0,0,0,15,0,15,0,0,0,15,0,
	15,0,0,0,15,0,15,0,0,0,15,0,15,15,15,15,
	15,0,0,15,15,15,0,0,15,0,0,0,0,0,0,15,
	15,15,0,0,0,0,15,0,0,0,0,0,0,0,0,0,
	15,0,0,0,15,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,0,0,0,0,15,0,0,0,15,0,
	0,0,15,0,15,0,0,0,15,0,15,0,0,0,15,0,
	0,15,0,15,0,0,0,15,0,15,0,0,0,0,0,0,
	15,0,0,15,0,0,0,0,0,15,0,0,0,0,0,0,
	0,15,0,0,0,15,0,15,0,0,0,0,0,0,0,0,
	15,15,15,15,0,0,15,0,0,0,15,0,15,15,15,15,
	0,0,0,15,15,15,0,0,0,0,15,0,0,0,15,0,
	0,0,15,0,15,0,0,0,15,0,15,0,0,0,15,0,
	0,0,15,0,0,0,0,0,15,0,0,0,0,0,0,15,
	0,0,0,15,0,0,0,0,0,15,0,0,0,0,0,0,
	0,15,0,0,15,0,0,0,15,0,0,0,0,0,0,0,
	15,0,0,0,0,0,15,0,0,0,15,0,15,0,0,0,
	15,0,0,0,0,0,15,0,0,0,15,0,0,0,15,0,
	0,0,15,0,15,0,0,0,15,0,15,0,0,0,15,0,
	0,15,0,15,0,0,0,0,15,0,0,0,0,0,15,0,
	0,0,0,15,0,0,0,0,0,0,15,0,0,0,0,0,
	0,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	15,0,0,0,0,0,15,0,0,0,15,0,15,0,0,0,
	15,0,0,0,0,0,15,0,0,0,15,0,0,0,15,0,
	0,0,15,0,0,15,0,15,0,0,15,0,15,0,15,0,
	15,0,0,0,15,0,0,0,15,0,0,0,0,15,0,0,
	0,0,0,15,0,0,0,0,0,0,0,15,0,0,0,0,
	0,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	15,0,0,0,0,0,15,0,0,15,0,0,15,0,0,0,
	15,0,15,0,0,0,15,0,0,0,15,0,0,0,15,0,
	0,0,15,0,0,15,0,15,0,0,15,15,0,15,15,0,
	15,0,0,0,15,0,0,0,15,0,0,0,15,0,0,0,
	0,0,0,15,0,0,0,0,0,0,0,15,0,0,0,0,
	0,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	15,0,0,0,0,0,0,15,15,0,15,0,15,0,0,0,
	15,0,0,15,15,15,0,0,0,0,15,0,0,0,0,15,
	15,15,0,0,0,0,15,0,0,0,15,0,0,0,15,0,
	15,0,0,0,15,0,0,0,15,0,0,0,15,15,15,15,
	15,0,0,15,15,15,0,0,0,0,0,0,15,0,0,15,
	15,15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,15,15,15,15,15,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,15,0,0,0,0,0,0,0,0,0,15,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,15,0,0,0,
	0,0,0,0,0,0,0,15,15,0,0,0,0,0,0,0,
	15,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,
	15,0,0,15,0,0,0,0,0,0,15,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,15,0,0,0,0,0,0,0,0,0,15,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,15,0,0,0,
	0,0,0,0,0,0,15,0,0,0,0,0,0,0,0,0,
	15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,15,0,0,0,0,0,0,15,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,15,0,0,0,15,15,15,0,0,15,0,15,15,
	0,0,0,15,15,15,0,0,0,15,15,0,15,0,0,15,
	15,15,0,0,0,15,15,15,15,0,0,15,15,15,15,0,
	15,0,15,15,0,0,0,0,15,0,0,0,0,0,0,0,
	15,0,0,15,0,0,15,0,0,0,15,0,0,0,15,15,
	0,15,0,0,15,15,15,15,0,0,0,15,15,15,0,0,
	0,0,0,0,0,0,0,0,0,0,15,0,15,15,0,0,
	15,0,15,0,0,0,15,0,15,0,0,15,15,0,15,0,
	0,0,15,0,0,0,15,0,0,0,15,0,0,0,15,0,
	15,15,0,0,15,0,0,0,15,0,0,0,0,0,0,0,
	15,0,0,15,0,15,0,0,0,0,15,0,0,0,15,0,
	15,0,15,0,15,0,0,0,15,0,15,0,0,0,15,0,
	0,0,0,0,0,0,0,15,15,15,15,0,15,0,0,0,
	15,0,15,0,0,0,0,0,15,0,0,0,15,0,15,15,
	15,15,15,0,0,0,15,0,0,0,15,0,0,0,15,0,
	15,0,0,0,15,0,0,0,15,0,0,0,0,0,0,0,
	15,0,0,15,15,0,0,0,0,0,15,0,0,0,15,0,
	15,0,15,0,15,0,0,0,15,0,15,0,0,0,15,0,
	0,0,0,0,0,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,15,0,
	0,0,0,0,0,0,15,0,0,0,0,15,15,15,15,0,
	15,0,0,0,15,0,0,0,15,0,0,0,15,0,0,0,
	15,0,0,15,0,15,0,0,0,0,15,0,0,0,15,0,
	0,0,15,0,15,0,0,0,15,0,15,0,0,0,15,0,
	0,0,0,0,0,0,0,15,15,15,15,0,15,15,15,15,
	0,0,0,15,15,15,0,0,0,15,15,15,15,0,0,15,
	15,15,15,0,0,0,15,0,0,0,0,0,0,0,15,0,
	15,0,0,0,15,0,0,0,15,0,0,0,15,0,0,0,
	15,0,0,15,0,0,15,0,0,0,0,15,0,0,15,0,
	0,0,15,0,15,0,0,0,15,0,0,15,15,15,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,15,15,15,15,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,15,15,15,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,15,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,15,15,0,0,0,15,0,0,0,0,15,
	15,0,0,0,0,15,15,0,0,15,0,15,0,0,15,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,15,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,15,0,0,0,0,0,15,0,0,0,0,0,
	0,15,0,0,15,0,0,15,15,0,15,0,0,15,0,0,
	15,0,15,15,0,0,0,15,15,0,15,0,15,0,15,15,
	0,0,0,15,15,15,15,0,0,15,15,15,0,0,15,0,
	0,0,15,0,15,0,0,0,15,0,15,0,0,0,15,0,
	15,0,0,0,15,0,15,0,0,0,15,0,15,15,15,15,
	15,0,0,0,15,0,0,0,0,0,15,0,0,0,0,0,
	0,15,0,0,0,0,0,0,0,0,0,0,15,0,0,15,
	15,15,0,0,15,0,15,0,0,15,15,0,15,15,0,0,
	15,0,15,0,0,0,0,0,0,0,15,0,0,0,15,0,
	0,0,15,0,15,0,0,0,15,0,15,0,0,0,15,0,
	0,15,0,15,0,0,15,0,0,0,15,0,0,0,0,15,
	0,0,0,15,0,0,0,0,0,0,15,0,0,0,0,0,
	0,0,15,0,0,0,0,0,0,0,0,15,0,0,15,0,
	15,0,0,0,15,0,15,0,0,0,15,0,15,0,0,0,
	0,0,0,15,15,15,0,0,0,0,15,0,0,0,15,0,
	0,0,15,0,15,0,0,0,15,0,15,0,15,0,15,0,
	0,0,15,0,0,0,15,0,0,0,15,0,0,0,15,0,
	0,0,0,0,15,0,0,0,0,0,15,0,0,0,0,0,
	0,15,0,0,0,0,0,0,0,0,15,0,0,15,0,0,
	15,15,15,15,0,0,0,15,15,15,15,0,15,0,0,0,
	0,0,0,0,0,0,15,0,0,0,15,0,0,0,15,0,
	0,0,15,0,0,15,0,15,0,0,15,0,15,0,15,0,
	0,15,0,15,0,0,0,15,15,15,15,0,0,15,0,0,
	0,0,0,0,15,0,0,0,0,0,15,0,0,0,0,0,
	0,15,0,0,0,0,0,0,0,0,0,0,15,0,0,15,
	15,0,0,0,0,0,0,0,0,0,15,0,15,0,0,0,
	0,0,15,15,15,15,0,0,0,0,0,15,0,0,0,15,
	15,15,15,0,0,0,15,0,0,0,0,15,15,15,15,0,
	15,0,0,0,15,0,0,0,0,0,15,0,15,15,15,15,
	15,0,0,0,0,15,15,0,0,0,15,0,0,0,0,15,
	15,0,0,0,0,0,0,0,0,0,0,15,0,0,15,0,
	15,0,0,0,0,0,0,0,0,0,15,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,15,15,15,15,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,15,0,0,15,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,15,0,0,15,
	0,0,0,0,0,0,15,15,15,0,0,0,0,0,0,15,
	15,15,15,15,15,15,15,15,0,0,0,0,0,0,15,15,
	15,0,0,0,0,0,0,15,15,15,15,15,15,15,15,15,
	0,0,0,0,0,0,15,15,15,0,0,0,0,0,0,15,
	15,15,15,15,15,15,15,15,0,0,0,0,0,0,15,15,
	15,0,0,0,0,0,0,15,15,15,15,15,15,15,15,15,
	0,0,0,0,0,0,15,15,15,0,0,0,0,0,0,15,
	15,15,15,15,15,15,15,15,0,0,0,0,0,0,15,15,
	15,0,0,0,0,0,0,15,15,15,15,15,15,15,15,15,
	0,0,0,0,0,0,15,15,15,0,0,0,0,0,0,15,
	15,15,15,15,15,15,15,15,0,0,0,0,0,0,15,15,
	15,0,0,0,0,0,0,15,15,15,15,15,15,15,15,15,
	0,0,0,0,0,0,15,15,15,0,0,0,0,0,0,15,
	15,15,15,15,15,15,15,15,0,0,0,0,0,0,15,15,
	15,0,0,0,0,0,0,15,15,15,15,15,15,15,15,15,
	0,0,0,0,0,0,15,15,15,0,0,0,0,0,0,15,
	15,15,15,15,15,15,15,15,0,0,0,0,0,0,15,15,
	15,0,0,0,0,0,0,15,15,15,15,15,15,15,15,15,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,15,15,0,0,0,15,15,
	15,0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,
	0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,15,
	15,15,0,0,0,15,15,15,15,15,15,15,15,15,15,15,
	15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,15,15,0,0,0,15,15,
	15,0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,
	0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,15,
	15,15,0,0,0,15,15,15,15,15,15,15,15,15,15,15,
	15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,15,15,0,0,0,15,15,
	15,0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,
	0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,15,
	15,15,0,0,0,15,15,15,15,15,15,15,15,15,15,15,
	15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,15,15,15,0,0,0,0,0,0,15,
	15,15,15,15,15,15,15,15,0,0,0,0,0,0,15,15,
	15,0,0,0,0,0,0,15,15,15,15,15,15,15,15,15,
	0,0,0,0,0,0,15,15,15,0,0,0,0,0,0,15,
	15,15,15,15,15,15,15,15,0,0,0,0,0,0,15,15,
	15,0,0,0,0,0,0,15,15,15,15,15,15,15,15,15,
	0,0,0,0,0,0,15,15,15,0,0,0,0,0,0,15,
	15,15,15,15,15,15,15,15,0,0,0,0,0,0,15,15,
	15,0,0,0,0,0,0,15,15,15,15,15,15,15,15,15,
	0,0,0,0,0,0,15,15,15,0,0,0,0,0,0,15,
	15,15,15,15,15,15,15,15,0,0,0,0,0,0,15,15,
	15,0,0,0,0,0,0,15,15,15,15,15,15,15,15,15,
	0,0,0,0,0,0,15,15,15,0,0,0,0,0,0,15,
	15,15,15,15,15,15,15,15,0,0,0,0,0,0,15,15,
	15,0,0,0,0,0,0,15,15,15,15,15,15,15,15,15,
	0,0,0,0,0,0,15,15,15,0,0,0,0,0,0,15,
	15,15,15,15,15,15,15,15,0,0,0,0,0,0,15,15,
	15,0,0,0,0,0,0,15,15,15,15,15,15,15,15,15,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,15,15,0,0,0,15,15,
	15,0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,
	0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,15,
	15,15,0,0,0,15,15,15,15,15,15,15,15,15,15,15,
	15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,15,15,0,0,0,15,15,
	15,0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,
	0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,15,
	15,15,0,0,0,15,15,15,15,15,15,15,15,15,15,15,
	15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,15,15,0,0,0,15,15,
	15,0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,
	0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,15,
	15,15,0,0,0,15,15,15,15,15,15,15,15,15,15,15,
	15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,15,
	15,15,15,0,0,0,15,15,15,0,0,0,15,15,15,0,
	0,0,15,15,15,0,0,0,15,15,15,0,0,0,15,15,
	15,0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,
	15,15,15,0,0,0,15,15,15,0,0,0,15,15,15,0,
	0,0,15,15,15,0,0,0,15,15,15,0,0,0,15,15,
	15,0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,
	15,15,15,0,0,0,15,15,15,0,0,0,15,15,15,0,
	0,0,15,15,15,0,0,0,15,15,15,0,0,0,15,15,
	15,0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,
	15,15,15,0,0,0,15,15,15,0,0,0,15,15,15,0,
	0,0,15,15,15,0,0,0,15,15,15,0,0,0,15,15,
	15,0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,
	15,15,15,0,0,0,15,15,15,0,0,0,15,15,15,0,
	0,0,15,15,15,0,0,0,15,15,15,0,0,0,15,15,
	15,0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,
	15,15,15,0,0,0,15,15,15,0,0,0,15,15,15,0,
	0,0,15,15,15,0,0,0,15,15,15,0,0,0,15,15,
	15,0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,
	0,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,
	0,0,0,0,15,15,0,0,0,0,0,0,0,0,15,0,
	0,0,15,0,0,0,15,0,0,0,0,15,15,15,15,0,
	0,15,0,15,0,0,0,0,0,0,0,0,0,15,15,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,15,15,15,15,15,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,0,
	0,0,0,15,0,0,15,0,15,0,0,0,15,0,0,15,
	0,15,0,0,0,0,15,0,0,0,15,15,0,0,0,0,
	0,0,0,0,0,0,0,15,15,15,15,0,0,0,0,15,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,15,15,15,15,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,0,0,0,0,15,15,15,
	0,0,0,15,0,0,0,0,0,15,15,15,0,0,15,15,
	15,15,15,0,0,0,15,0,0,0,15,0,15,15,0,0,
	0,0,0,0,0,0,15,0,0,15,0,15,0,15,15,15,
	0,0,0,0,15,0,15,0,0,0,0,0,0,0,0,0,
	0,0,0,0,15,0,15,15,0,15,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,0,0,0,15,0,0,0,
	15,0,15,15,15,15,0,0,15,0,0,0,15,0,0,0,
	15,0,0,0,0,0,0,0,0,0,15,0,0,0,15,0,
	0,0,0,0,0,0,15,0,15,0,0,15,15,0,0,15,
	0,0,0,15,0,15,0,0,15,15,15,15,15,0,15,15,
	15,15,15,0,15,0,15,15,0,15,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,0,0,0,15,0,0,0,
	0,0,0,15,0,0,0,0,15,0,0,0,15,0,15,15,
	15,15,15,0,0,0,15,0,0,0,0,15,15,0,15,0,
	0,0,0,0,0,0,15,0,15,0,0,15,0,15,15,15,
	0,0,15,0,15,0,0,0,0,0,0,0,15,0,0,0,
	0,0,0,0,15,0,15,0,15,15,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,0,0,0,15,0,0,0,
	15,0,0,15,0,0,0,0,15,0,0,0,15,0,0,0,
	15,0,0,0,0,0,15,0,0,0,0,0,0,15,15,0,
	0,0,0,0,0,0,15,0,0,15,0,15,0,0,0,0,
	0,0,0,15,0,15,0,0,0,0,0,0,15,0,0,0,
	0,0,0,0,15,0,0,0,0,15,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,0,0,0,0,15,15,15,
	0,0,15,15,15,15,15,0,0,15,15,15,0,0,0,0,
	15,0,0,0,0,0,15,0,0,0,15,15,15,15,0,0,
	0,0,0,0,0,0,0,15,15,15,15,0,0,0,0,0,
	0,0,0,0,15,0,15,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,15,15,15,15,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,0,
	0,0,0,0,0,0,0,0,15,0,0,0,15,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,15,15,0,0,0,0,0,0,0,0,0,15,0,0,0,
	0,0,15,15,0,0,0,0,0,15,0,0,0,0,0,0,
	0,0,0,0,0,15,15,15,15,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,0,0,0,15,0,15,0,
	0,0,15,0,15,15,0,0,15,0,0,0,15,0,0,0,
	15,0,0,15,0,0,0,0,15,0,0,0,0,15,0,0,
	0,0,0,15,0,0,0,0,15,0,0,0,0,0,0,0,
	0,0,0,0,15,0,15,0,15,0,0,0,0,0,0,0,
	0,0,0,0,0,0,15,15,0,0,0,0,0,15,15,15,
	0,0,0,0,0,0,0,0,15,0,0,15,0,0,15,0,
	0,15,0,0,0,15,0,15,0,0,0,0,0,0,0,0,
	15,0,0,15,0,0,0,0,15,0,0,0,15,15,0,0,
	0,0,15,15,0,0,0,0,0,0,0,0,0,0,15,0,
	0,0,15,0,15,0,15,0,15,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,15,0,0,0,0,15,0,0,0,
	15,0,15,0,15,0,0,0,0,0,0,15,0,0,0,0,
	0,15,0,0,15,15,0,15,0,0,0,0,15,0,0,0,
	0,15,15,0,0,0,15,15,15,15,15,0,15,0,0,0,
	0,0,0,15,0,0,0,0,0,0,0,0,0,0,15,0,
	0,0,15,0,0,15,15,0,15,0,0,0,15,15,0,0,
	0,0,0,0,0,0,0,15,0,0,0,0,15,0,0,0,
	15,0,0,15,0,15,0,0,0,0,15,0,0,0,0,0,
	15,0,0,0,0,0,15,0,0,0,0,15,0,0,0,0,
	0,0,0,0,0,0,0,0,15,0,0,0,15,15,0,0,
	0,0,15,15,0,0,0,0,0,0,0,0,0,0,15,0,
	0,0,15,0,0,0,15,0,15,0,0,0,15,15,0,0,
	0,0,0,0,0,0,15,15,15,0,0,0,15,0,0,0,
	15,0,0,0,15,0,15,0,0,15,0,15,15,0,0,15,
	0,0,15,0,0,15,0,15,15,0,15,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,0,
	0,0,15,0,0,0,15,0,15,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,15,15,15,
	0,0,0,15,0,15,0,0,0,15,0,15,15,0,0,15,
	0,15,0,0,0,15,0,15,15,0,15,0,0,0,15,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,15,
	15,15,0,15,0,0,15,0,15,0,0,0,0,0,0,0,
	0,0,0,15,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,15,0,15,0,0,0,15,0,0,0,15,0,15,0,
	0,15,15,0,15,0,0,0,15,0,0,15,15,15,0,0,
	0,0,0,0,0,0,15,15,15,15,15,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,15,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	15,15,0,0,0,0,0,0,0,15,15,0,0,15,15,15,
	0,0,0,15,0,15,0,0,0,15,0,15,0,0,0,0,
	15,0,0,0,0,15,15,15,15,0,0,15,15,15,0,0,
	15,15,0,0,0,0,0,0,0,15,15,0,0,15,15,15,
	0,0,0,15,0,15,0,0,0,15,15,0,0,0,0,0,
	15,15,0,0,0,0,15,0,0,0,0,15,0,15,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,15,0,0,0,
	15,0,15,0,15,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,15,0,15,0,0,0,15,0,0,0,15,0,
	0,0,0,0,0,0,0,0,0,0,0,0,15,0,0,0,
	15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,15,0,15,0,0,0,0,0,0,0,0,
	0,15,15,15,0,0,0,15,15,15,0,0,0,15,15,15,
	0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,15,
	15,15,0,0,15,0,15,0,0,0,15,0,0,0,0,0,
	15,15,15,15,15,0,15,15,15,15,15,0,15,15,15,15,
	15,0,15,15,15,15,15,0,0,15,15,15,0,0,0,15,
	15,15,0,0,0,15,15,15,0,0,0,15,15,15,0,0,
	15,0,0,0,15,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,15,0,
	0,0,15,0,15,15,15,15,0,0,15,0,0,0,0,0,
	15,0,0,0,0,0,15,0,0,0,0,0,15,0,0,0,
	0,0,15,0,0,0,0,0,0,0,15,0,0,0,0,0,
	15,0,0,0,0,0,15,0,0,0,0,0,15,0,0,0,
	15,15,15,15,15,0,15,15,15,15,15,0,15,15,15,15,
	15,0,15,15,15,15,15,0,15,15,15,15,15,0,15,15,
	15,15,15,0,15,0,15,0,0,0,15,0,0,0,15,0,
	15,15,15,15,0,0,15,15,15,15,0,0,15,15,15,15,
	0,0,15,15,15,15,0,0,0,0,15,0,0,0,0,0,
	15,0,0,0,0,0,15,0,0,0,0,0,15,0,0,0,
	15,0,0,0,15,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,15,0,
	0,0,15,0,15,0,15,0,0,0,0,15,15,15,0,0,
	15,0,0,0,0,0,15,0,0,0,0,0,15,0,0,0,
	0,0,15,0,0,0,0,0,0,0,15,0,0,0,0,0,
	15,0,0,0,0,0,15,0,0,0,0,0,15,0,0,0,
	15,0,0,0,15,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,15,0,
	0,0,15,0,15,0,15,15,15,0,0,0,0,15,0,0,
	15,15,15,15,15,0,15,15,15,15,15,0,15,15,15,15,
	15,0,15,15,15,15,15,0,0,15,15,15,0,0,0,15,
	15,15,0,0,0,15,15,15,0,0,0,15,15,15,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,15,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	15,15,15,15,0,0,0,0,15,0,15,0,15,15,0,0,
	0,0,0,0,0,15,15,0,0,15,15,15,0,0,0,15,
	0,15,0,0,0,15,0,15,0,0,0,0,0,0,0,0,
	0,15,15,15,0,0,15,15,0,0,0,0,0,0,0,15,
	15,0,0,0,15,0,0,0,0,15,0,15,0,0,0,0,
	0,15,15,0,0,15,15,15,0,0,15,15,15,15,0,0,
	15,0,0,0,15,0,0,15,0,15,0,0,0,15,15,15,
	0,0,0,15,15,15,0,0,15,0,0,0,15,0,15,0,
	15,0,0,0,0,15,15,15,0,0,15,0,0,0,15,0,
	15,0,0,0,15,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,15,0,15,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,15,0,0,0,15,0,0,0,15,0,
	15,0,0,0,15,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,0,15,15,15,0,0,0,15,
	15,15,0,0,15,0,0,0,15,0,0,15,0,15,0,0,
	15,0,0,15,15,0,15,0,0,0,15,0,15,0,0,0,
	15,0,0,0,0,0,0,0,15,0,0,0,15,0,15,0,
	0,0,15,0,0,0,15,15,0,0,15,0,15,15,0,0,
	15,15,0,0,15,0,15,15,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,15,0,
	0,0,15,0,15,0,0,0,15,0,0,0,15,0,0,0,
	15,0,15,0,15,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,0,15,
	0,15,0,0,0,0,15,0,15,0,15,0,0,0,15,0,
	15,0,0,0,15,0,15,0,15,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,15,0,
	0,0,15,0,15,0,0,0,15,0,0,15,0,15,0,0,
	15,15,0,0,15,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,0,0,
	15,0,0,0,0,0,15,15,0,0,15,0,0,0,15,0,
	15,0,0,0,15,0,15,0,0,15,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,15,0,
	0,0,15,0,15,0,0,0,15,0,15,0,0,0,15,0,
	15,0,0,0,15,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,0,0,
	15,0,0,0,0,0,15,0,0,0,15,0,0,0,15,0,
	15,15,15,15,0,0,15,0,0,0,15,0,0,15,15,15,
	0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,15,
	15,15,0,0,0,15,15,15,0,0,0,0,0,0,0,0,
	0,15,15,15,0,0,0,15,15,15,0,0,0,15,15,15,
	0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,0,
	15,0,0,0,0,15,15,15,0,0,15,0,15,15,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,15,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	15,15,0,0,0,0,0,0,0,15,15,0,0,15,15,15,
	0,0,0,15,0,15,0,0,0,15,0,15,0,0,0,0,
	15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	15,15,0,0,0,0,0,0,0,15,15,0,0,15,15,15,
	0,0,0,15,0,15,0,0,0,15,15,0,0,0,0,0,
	15,15,0,0,0,0,15,0,0,0,0,15,0,15,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,15,0,0,0,
	15,0,15,0,15,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,15,15,15,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,15,0,0,0,
	15,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,15,0,15,0,0,0,0,0,0,0,0,
	0,15,15,15,0,0,0,15,15,15,0,0,0,15,15,15,
	0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,15,
	15,15,0,0,0,15,0,15,15,0,15,0,0,0,15,0,
	0,15,15,15,0,0,0,15,15,15,0,0,0,15,15,15,
	0,0,0,15,15,15,0,0,0,0,15,0,0,0,0,0,
	15,0,0,0,0,0,15,0,0,0,0,0,15,0,0,0,
	0,0,0,0,15,0,0,0,0,0,15,0,0,0,0,0,
	15,0,0,0,0,0,15,0,0,0,0,0,15,0,0,0,
	0,0,15,0,15,0,15,0,0,15,15,0,0,0,0,0,
	15,0,0,0,15,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,0,0,15,0,0,0,0,0,
	15,0,0,0,0,0,15,0,0,0,0,0,15,0,0,0,
	0,15,15,15,15,0,0,15,15,15,15,0,0,15,15,15,
	15,0,0,15,15,15,15,0,0,15,15,15,15,0,0,15,
	15,15,15,0,15,15,15,15,15,0,15,0,0,0,15,0,
	15,15,15,15,15,0,15,15,15,15,15,0,15,15,15,15,
	15,0,15,15,15,15,15,0,0,0,15,0,0,0,0,0,
	15,0,0,0,0,0,15,0,0,0,0,0,15,0,0,0,
	15,0,0,0,15,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,15,0,
	0,0,15,0,15,0,15,0,0,0,0,15,15,15,0,0,
	15,0,0,0,0,0,15,0,0,0,0,0,15,0,0,0,
	0,0,15,0,0,0,0,0,0,0,15,0,0,0,0,0,
	15,0,0,0,0,0,15,0,0,0,0,0,15,0,0,0,
	0,15,15,15,15,0,0,15,15,15,15,0,0,15,15,15,
	15,0,0,15,15,15,15,0,0,15,15,15,15,0,0,15,
	15,15,15,0,0,15,0,15,15,15,0,0,0,15,0,0,
	0,15,15,15,15,0,0,15,15,15,15,0,0,15,15,15,
	15,0,0,15,15,15,15,0,0,0,15,0,0,0,0,0,
	15,0,0,0,0,0,15,0,0,0,0,0,15,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,15,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,15,0,0,0,0,15,0,15,0,0,15,15,0,0,
	0,0,0,0,0,15,15,0,0,15,15,15,0,0,0,15,
	0,15,0,0,0,15,0,15,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,15,15,0,0,0,0,0,0,0,15,
	15,0,0,0,15,0,0,0,0,15,0,15,0,0,0,0,
	0,15,15,0,0,15,15,0,0,0,0,15,0,15,0,0,
	0,0,0,15,0,0,15,0,15,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,15,0,0,0,15,0,15,0,
	15,0,0,0,0,0,0,0,0,0,0,0,15,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,15,0,15,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,15,0,0,0,0,0,0,0,0,0,
	0,15,15,15,15,0,15,15,15,15,0,0,0,15,15,15,
	0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,15,
	15,15,0,0,0,15,15,15,0,0,0,0,0,0,0,0,
	0,15,15,15,0,0,15,0,0,0,15,0,15,0,0,0,
	15,0,0,0,0,0,0,0,15,0,0,0,15,0,15,0,
	0,0,15,0,0,0,15,15,0,0,15,0,0,0,15,0,
	15,0,0,0,15,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,15,0,
	0,0,15,0,15,0,0,0,15,0,15,15,15,15,15,0,
	15,0,0,15,15,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,15,0,
	0,0,15,0,0,0,15,0,15,0,15,0,0,0,15,0,
	15,0,0,0,15,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,15,0,
	0,0,15,0,15,0,0,0,15,0,0,0,0,0,0,0,
	15,0,15,0,15,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,15,0,
	0,0,15,0,0,0,15,15,0,0,15,0,0,0,15,0,
	15,0,0,0,15,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,15,0,
	0,0,15,0,15,0,0,0,15,0,0,0,15,0,0,0,
	15,15,0,0,15,0,15,0,0,0,15,0,15,0,0,0,
	15,0,15,0,0,0,15,0,15,0,0,0,15,0,0,15,
	15,15,15,0,0,0,15,0,0,0,0,15,15,15,15,0,
	0,15,15,15,0,0,15,0,0,0,15,0,0,15,15,15,
	0,0,0,15,15,15,0,0,0,15,15,15,0,0,0,15,
	15,15,0,0,0,15,15,15,0,0,0,0,0,0,0,0,
	0,15,15,15,0,0,0,15,15,15,15,0,0,15,15,15,
	15,0,0,15,15,15,15,0,0,15,15,15,15,0,0,0,
	0,0,15,0,0,15,15,15,0,0,0,0,0,0,15,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,15,15,
	15,15,0,0,0,0,0,0,0,0,15,15,15,15,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0
	};
