#include <Arduino.h>

int led[5]={12,13,14,18,19};
String myString = "";

void setup() 
{
  Serial.begin(115200);
  for(int i=0;i<5;i++)
  {
    pinMode(led[i],OUTPUT);
    digitalWrite(led[i], LOW);
  }
  Serial.println("可用指令: 1-5 (控制LED1-LED5)");
}

void loop() 
{
  if (Serial.available()>0)
  {
    myString=Serial.readStringUntil('\n');
    myString.trim(); 

    for (int i = 0; i < 5; i++) 
    {
      digitalWrite(led[i], LOW);
    }

    if(myString.length()==1&&myString>="1"&&myString<="5")
    {
      int ledindex=myString.toInt()-1;
      digitalWrite(led[ledindex],HIGH);

      Serial.print("LED");
      Serial.print(ledindex+1);
      Serial.println("亮");
    }
    else
    {
      Serial.println("无效指令");
    }
  }
}