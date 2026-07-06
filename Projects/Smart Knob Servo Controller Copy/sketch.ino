#include <Servo.h>
Servo myServo;

void setup() {
  Serial.begin(9600);
  myServo.attach(9);
  myServo.write(0);
pinMode(A0,INPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(10, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int Potvalue=analogRead(A0); 
Serial.print("Potvalue=");
Serial.println(Potvalue);
delay(2000);


int i=map(Potvalue,0,1023,0,180);
int j=map(Potvalue,0,1023,0,255);
myServo.write(i);
analogWrite(10,j);

}
