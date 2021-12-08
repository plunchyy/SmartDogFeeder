#define BLYNK_TEMPLATE_ID "TMPLEq8zouI2"
#define BLYNK_DEVICE_NAME "LED Pin"
#define BLYNK_FIRMWARE_VERSION        "0.1.0"
#define BLYNK_PRINT Serial
#define APP_DEBUG

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "BlynkEdgent.h"
#include <Servo.h>
Servo petGate;
int gatevalue = 0;
const int pingPin = 14;
int inPin = 12;

void ultrasonicSensor()
{
    long duration, cm;
    pinMode(pingPin, OUTPUT);
    digitalWrite(pingPin, LOW);
    delayMicroseconds(2);
    digitalWrite(pingPin, HIGH);
    delayMicroseconds(5);
    digitalWrite(pingPin, LOW);
    pinMode(inPin, INPUT);
    duration = pulseIn(inPin, HIGH);
    cm = microsecondsToCentimeters(duration);
    Serial.print(cm);
    Serial.print("cm");
    Serial.println();
    delay(10000);
    int persent = 0;
    if(cm >  15)
    {
      persent = 0;
    }
    else if (cm >= 13)
    {
      persent = 5;
    }
    else if (cm >= 11)
    {
      persent = 15;
    }
    else if (cm >= 9)
    {
      persent = 35;
    }
    else if (cm >= 6)
    {
      persent = 50;
    }
    else if (cm >= 3)
    {
      persent = 75;
    }
    else if (cm >= 0)
    {
      persent = 100;
    }
    Blynk.virtualWrite(V3, persent);
}
long microsecondsToCentimeters(long microseconds)
{
return microseconds / 29 / 2;
}

BLYNK_WRITE(V0)
{
  int value = param.asInt();
  digitalWrite(D4, !value);
}

BLYNK_WRITE(V1)
{
  petGate.write(180);
  delay(2000);
  gatevalue = 1;
}

void gate()
{
  petGate.write(0);
  gatevalue = 0;
}

void setup()
{
  Serial.begin(115200);
  petGate.attach(5);
  petGate.write(0);
  delay(1000);
  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
  
  if (gatevalue=1)
  {
    gate();
  }  
  ultrasonicSensor();
} 
