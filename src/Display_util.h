#ifndef _DISPLAY_UTIL_H_
#define _DISPLAY_UTIL_H_
#include <Adafruit_GFX.h>
void initialize_display();
void drawTextLeftTop(char *dtext, int16_t left, int16_t top, const GFXfont *font, uint16_t color);
void drawText1();
void disp_test(int i);
void disp_count();

//uint16_t COLOR = RGB Red:5bit, Green:6bit, Blue:5bit
#define COLOR_BLACK 0x0000
#define COLOR_WHITE 0xFFFF
#define COLOR_RED 0xF800
#define COLOR_GREEN 0x07E0
#define COLOR_BLUE 0x001F
#define COLOR_CYAN 0x07FF
#define COLOR_MAGENTA 0xF81F
#define COLOR_YELLOW 0xFFE0
#define COLOR_ORANGE 0xFC00
//-------------------RRRRRGGGGGGBBBBB
#define COLOR_GRAY 0b1000010000010000

typedef struct _rectangle {
    int16_t x;
    int16_t y;
    uint16_t w;
    uint16_t h;
} rectangle;
#endif