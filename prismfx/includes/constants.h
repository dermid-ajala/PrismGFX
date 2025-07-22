#define MCP23S17_REG_IODIRA		0x00
#define MCP23S17_REG_IODIRB		0x01
#define MCP23S17_REG_IOCONA		0x0A
#define MCP23S17_REG_IOCONB		0x0B
#define MCP23S17_REG_GPIOA		0x12
#define MCP23S17_REG_GPIOB		0x13

// Flags for TFT_MADCTL
#define TFT_MAD_MY  0x80
#define TFT_MAD_MX  0x40
#define TFT_MAD_MV  0x20
#define TFT_MAD_ML  0x10
#define TFT_MAD_RGB 0x00
#define TFT_MAD_BGR 0x08
#define TFT_MAD_MH  0x04
#define TFT_MAD_SS  0x02
#define TFT_MAD_GS  0x01

#define C_BLACK	  0
#define C_WHITE   0xffff
#define C_RED     0xf800
#define C_GREEN	  0x07e0
#define C_BLUE	  0x001f
#define C_CYAN	  0x07ff
#define C_MAGENTA 0xf81f
#define C_YELLOW  0xffe0
#define C_DEFAULT 0xfffa

const uint16_t _H = 239;	// screen height, max Y
const uint16_t _W = 239;	// screen width, max x

typedef struct pData{
	float data[240];						// data points from plot data block
	float min, max;							// min and max, from init plot block or dynamic (from data)
	char units[8];							// units from init plot block
	char variable[8];						// variable name from init plot block
	char format[8];							// %7.nf where n comes from init plot block
	uint16_t color;							// color from init plot block
	bool fixedMin, fixedMax;				// true if min and max specified in init plot block	
} plotData;

#ifndef _GFXFONT_H_
#define _GFXFONT_H_

/// Font data stored PER GLYPH
typedef struct {
	uint16_t bitmapOffset;     ///< Pointer into GFXfont->bitmap
	uint8_t  width;            ///< Bitmap dimensions in pixels
    uint8_t  height;           ///< Bitmap dimensions in pixels
	uint8_t  xAdvance;         ///< Distance to advance cursor (x axis)
	int8_t   xOffset;          ///< X dist from cursor pos to UL corner
    int8_t   yOffset;          ///< Y dist from cursor pos to UL corner
} GFXglyph;

/// Data stored for FONT AS A WHOLE
typedef struct { 
	uint8_t  *bitmap;      ///< Glyph bitmaps, concatenated
	GFXglyph *glyph;       ///< Glyph array
	uint8_t   first;       ///< ASCII extents (first char)
    uint8_t   last;        ///< ASCII extents (last char)
	uint8_t   yAdvance;    ///< Newline distance (y axis)
} GFXfont;
#endif

