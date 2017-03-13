#include <LowPower.h>

void setup() {
  pinMode(13, OUTPUT); // LED vermelho
  pinMode(12, OUTPUT); // LED Verder
  pinMode(11, OUTPUT); // Speaker
}

void loop() {
  Serial.flush();
  Serial.begin(9600);
  int sensorIV = analogRead(A0);
  Serial.println(sensorIV);
  if(sensorIV>1016){
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(13, LOW);
  }else{
    digitalWrite(13, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(12, LOW);
  }
  Serial.end();
  LowPower.powerDown(SLEEP_1S, ADC_OFF, BOD_OFF);
} 


