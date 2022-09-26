#include <Arduino.h>
#include <SoftwareSerial.h>

SoftwareSerial swSer(13, 12);

void setup()
{
    Serial.begin(115200);
    swSer.begin(9600);
    delay(1000);
    Serial.println("Program is Ready");
}
void loop()
{
    while (Serial.available())
    {
        // Serial.println(Serial.read());
        swSer.write(Serial.read());
    }

    while (swSer.available())
    {
        // Serial.println(Serial.read());
        Serial.write(swSer.read());
    }
}
