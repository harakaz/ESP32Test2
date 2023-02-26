/**
 * @date 2022-11-22
 * @author Toshihiko Arai
 * @copyright https://101010.fun

  (1)GND--------- GND
  (2)VCC--------- 3V3
　(3)SCK--------- 18
　(4)SDA--------- 23
　(5)RESET------- 16
　(6)RS(A0)------ 17
　(7)CS----------  5
　(8)LED--------- 3V3

*/
#include <Adafruit_GFX.h>
#include <Adafruit_ST7735.h>
#include <SPI.h>
#include "Fonts/FreeSansBold12pt7b.h"
#include "Fonts/FreeMono9pt7b.h"
#include "Fonts/FreeSerif9pt7b.h"
#include "Fonts/FreeSans9pt7b.h"
#include "Fonts/FreeSans12pt7b.h"
#include "Fonts/FreeSans18pt7b.h"
#include "Fonts/FreeSans24pt7b.h"
//#include "Fonts/"
//#include "Fonts/"


#define TFT_RST 16  // IO4
#define TFT_DC 17   // IO2
//#define TFT_MOSI 23      // VSPID
//#define TFT_SCLK 18      // VSPICLK
//#define TFT_BACKLIGHT 7  // IO7
#define TFT_CS 5  // VSPICS0

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void initialize_display()
{
    tft.initR(INITR_GREENTAB);
    tft.fillScreen(ST77XX_MAGENTA);
    tft.setRotation(1);
    tft.setTextWrap(false);
    tft.setFont(&FreeSerif9pt7b);
    tft.setTextSize(1);
    tft.setCursor(5, 20);
//    tft.print("Ready...");
    delay(500);
}

void disp_test(int num)
{
    char buff[20];

    if (num == 1)
    {
        sprintf(buff, "%s", "ABCDEabcedfg123");
        tft.setTextWrap(false);
        tft.setTextColor(ST77XX_WHITE);
        tft.setTextSize(1);

        //tft.fillScreen(ST77XX_MAGENTA);
        tft.setFont(&FreeMono9pt7b);
        tft.setCursor(20, 50);
        tft.println(buff);

        tft.setFont(&FreeSans9pt7b);
        tft.setCursor(20, 70);
        tft.println(buff);

        tft.setFont(&FreeSerif9pt7b);
        tft.setCursor(20, 90);
        tft.println(buff);
    }

    if (num == 2)
    {
        sprintf(buff, "%s", "ABCDefg123");
        tft.setTextWrap(false);
        tft.setTextColor(ST77XX_WHITE);
        tft.setTextSize(1);

        //tft.fillScreen(ST77XX_MAGENTA);
        tft.setFont(&FreeSans9pt7b);
        tft.setCursor(20, 15);
        tft.println(buff);

        tft.setFont(&FreeSans12pt7b);
        tft.setCursor(20, 40);
        tft.println(buff);

        tft.setFont(&FreeSans18pt7b);
        tft.setCursor(20, 70);
        tft.println(buff);

        tft.setFont(&FreeSans24pt7b);
        tft.setCursor(20, 110);
        tft.println(buff);
    }
    //delay(500);
}

int dispnum = 0;
void disp_count()
{
  char buff[10];
  tft.setTextWrap(false);
  //tft.fillScreen(ST77XX_MAGENTA);

  tft.setFont(&FreeSansBold12pt7b);

  sprintf(buff, "%d", dispnum);
  tft.setTextColor(ST77XX_MAGENTA);
  tft.setCursor(40, 90);
  tft.setTextSize(1);
  tft.println(buff);
  dispnum++;
  sprintf(buff, "%d", dispnum);
  tft.setTextColor(ST77XX_WHITE);
  tft.setCursor(40, 90);
  tft.setTextSize(1);
  tft.println(buff);
}