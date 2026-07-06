#include <Servo.h>
Servo myServo;

void setup() {
  // put your setup code here, to run once:
  myServo.attach(9);
  myServo.write(0);
pinMode(A0,INPUT); 
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int Potvalue=analogRead(A0); 
Serial.print("Potvalue=");
Serial.println(Potvalue);
delay(1000);


if(Potvalue>50){ 
digitalWrite(2,1);
digitalWrite(3,0);
digitalWrite(4,1);
digitalWrite(5,0);
myServo.write(0);
delay(2000);
}
if(Potvalue>500){ 
digitalWrite(2,0);
digitalWrite(3,1);
digitalWrite(4,0);
digitalWrite(5,1);
myServo.write(90);
delay(2000);
}
if(Potvalue>800){ 
digitalWrite(2,0);
digitalWrite(3,1);
digitalWrite(4,0);
digitalWrite(5,1);
myServo.write(180);
delay(2000);
}
if(Potvalue>1000){ 
digitalWrite(2,1);
digitalWrite(3,0);
digitalWrite(4,1);
digitalWrite(5,0);
myServo.write(90);
delay(2000);
}
}
