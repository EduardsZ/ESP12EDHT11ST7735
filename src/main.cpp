#include <Arduino.h>

unsigned long timw;

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println("Start");
}

void loop(){
  if(millis() >= timw + 10000 || millis() < timw) {
    timw = millis()/1000*1000;
    Serial.println("Cycle");
    Serial.println(timw/1000);
  }
}