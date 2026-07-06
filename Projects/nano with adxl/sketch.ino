#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

Adafruit_MPU6050 mpu;

void setup(void) {
 Serial.begin(115200);

 lcd.init();
 lcd.backlight();  
 lcd.print("hello");


while(!mpu.begin()) {
  Serial.println("MPU6050 not connected");
  delay(1000);
}
Serial.println("MPU6050 ready!");
}

sensors_event_t event;

void loop() {
   mpu.getAccelerometerSensor()->getEvent(&event);

Serial.print("[");
Serial.print(millis());
Serial.print("] X:");
Serial.print(event.acceleration.x);
Serial.print(", Y:");
Serial.print(event.acceleration.y);
Serial.print(", Z:");
Serial.print(event.acceleration.z);
Serial.println(" m/s^2");

lcd.setCursor(0,0);
lcd.print("   X   Y   Z ");
lcd.setCursor(1,1);
lcd.print(event.acceleration.x);
lcd.setCursor(7,1);
lcd.print(event.acceleration.y);
lcd.setCursor(12,1);
lcd.print(event.acceleration.z);

delay(500);

}
