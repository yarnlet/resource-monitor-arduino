// made by @yarnlet
#include "Adafruit_GFX.h"
#include "Adafruit_HT1632.h"

// this follows the official Adafruit guide for the HT1632 LED matrix
// https://learn.adafruit.com/16x24-led-matrix/introduction
#define HT_DATA 2
#define HT_WR   3
#define HT_CS   4
#define HT_CS2  5

Adafruit_HT1632LEDMatrix matrix = Adafruit_HT1632LEDMatrix(HT_DATA, HT_WR, HT_CS, HT_CS2); // multi panel dot matrix setup

void setup() {
  Serial.begin(9600);
  matrix.begin(ADA_HT1632_COMMON_16NMOS);
  matrix.fillScreen();
  delay(500);
  matrix.setTextSize(1);
  matrix.setTextColor(1);
  matrix.setTextWrap(true);
}

void loop() {
  if (Serial.available() > 0) {
    String cpu = Serial.readStringUntil(','); // read first half (cpu)
    String ram = Serial.readStringUntil('\n'); // read second half (ram)

    matrix.clearScreen();

    matrix.setCursor(1, 0); // top left (row 1)
    matrix.print(cpu); // print cpu speed in GHz
    matrix.print("GHz");
    matrix.writeScreen();
    
    matrix.setCursor(1, 8); // top left (row 2)
    matrix.print(ram); // print ram usage in MB
    matrix.print("MB");
    matrix.writeScreen();
    
    delay(2000);
  }
}
