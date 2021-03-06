
#define cs   A2
#define dc   D0
#define rst  0  

#include "Adafruit_GFX.h"    // Core graphics library
#include "Adafruit_ST7735.h" // Hardware-specific library
#include "glcdfont.h"

Adafruit_ST7735 tft = Adafruit_ST7735(cs, dc, rst); // hardware spi

void setup() {
    
     tft.initR(INITR_BLACKTAB);
     
     tft.fillScreen(ST7735_BLACK);

    tft.setCursor(0, 0);
    tft.setTextColor(ST7735_WHITE);
    tft.setTextWrap(true);
    tft.print("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur adipiscing ante sed nibh tincidunt feugiat. Maecenas enim massa, fringilla");     
    
    tft.drawLine(0, 0, tft.width()-1, tft.height()-1, ST7735_YELLOW);
    tft.drawLine(tft.width()-1, 0, 0, tft.height()-1, ST7735_YELLOW);

    tft.drawPixel(0, tft.height()/2, ST7735_GREEN);

}

void loop() {

}