#include <Arduino.h>

static int cnt = 0;

void setup() {
// write your initialization code here
Serial.begin(9600);

}

void loop() {
// write your code here
Serial.println(cnt++);
delay(1000);
}