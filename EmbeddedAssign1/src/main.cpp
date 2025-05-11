#include <Arduino.h>

void setup()
{
  for(int i=12;i<=14;i++)
    pinMode(i,OUTPUT);
  pinMode(18,OUTPUT);
  pinMode(19,OUTPUT);
}

void loop() 
{
  
  for(int i=12;i<=14;i++)
  {
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
  }
  for(int i=18;i<=19;i++)
  {
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
  }
  delay(500);
  for(int i=19;i>=18;i--)
  {
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
  }
  for(int i=14;i>=12;i--)
  {
    digitalWrite(i,HIGH);
    delay(500);
    digitalWrite(i,LOW);
  }
  delay(500);
}