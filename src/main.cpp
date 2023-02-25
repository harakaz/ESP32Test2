#include <Arduino.h>

#include "Display_util.h"

int led = 27;

void setup() {
  // put your setup code here, to run once:
  //Serial.begin(921600);
  Serial.begin(115200);
  Serial.println("\nPG start *********************");
  pinMode(led, OUTPUT);

  // Test TFT Display
  initialize_display();
  delay(1000);
  disp_test();
}

void loop() {
  // put your main code here, to run repeatedly:
  //disp_count();
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}
