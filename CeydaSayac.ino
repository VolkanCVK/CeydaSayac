////////////  Ceyda Naz   ////////////
// 0'dan 100'e kadar sayıp  /////////
// tekrar başa dönen Arduino kodu //
/////////// Mart 2020 /////////////
///////////// Volkan /////////////

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128 // OLED ekran genişlik
#define SCREEN_HEIGHT 64 // OLED ekran yükseklik

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

int ceyda = 0;

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  delay(1000);
  display.clearDisplay();
  display.setTextColor(WHITE);
}

void loop(){
 for (int ceyda = 0; ceyda < 101; ceyda++)
 {
  display.clearDisplay(); 
  display.setTextSize(7);
  display.setCursor(0,16);
  display.print(String(ceyda));
  display.setTextSize(2);
  display.setCursor(10,0);
  display.print("CEYDA NAZ");
  display.display();
  delay(1200);
  } 
}
