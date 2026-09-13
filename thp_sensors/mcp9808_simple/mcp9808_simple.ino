#include <Wire.h>

#include <Adafruit_MCP9808.h>



Adafruit_MCP9808 sensor = Adafruit_MCP9808();



void setup() {

  Serial.begin(9600);

  Wire.begin();

  

  Serial.println("Testing CJMCU-9808...");



  if (!sensor.begin(0x18)) {

    Serial.println("Sensor not found!");

    while (1);

  }



  Serial.println("Sensor detected!");

}



void loop() {

  float tempC = sensor.readTempC();

  Serial.print("Temp: ");

  Serial.println(tempC);



  delay(1000);
}