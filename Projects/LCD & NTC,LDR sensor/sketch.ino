#include <LiquidCrystal.h>
LiquidCrystal lcd(13,12,11,10,9,8);

 
 void setup() {
lcd.begin(16,2);
Serial.begin(9600);
pinMode(A0, INPUT);
pinMode(A1, INPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
 }
 void loop() {
int Temp=analogRead(A0);
int Ldr=analogRead(A1);
Serial.print("Temp value=");
Serial.println(Temp);
Serial.print("Ldr value=");
Serial.println(Ldr); 

lcd.setCursor(0,0);
lcd.print("Temp value=");
lcd.print(Temp);
lcd.setCursor(0,1);
lcd.print("Ldr value=");
lcd.print(Ldr);

delay(1000);

if((Temp>50)&&(Temp<300)){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("High Temperature");
  digitalWrite(2,1);
  Serial.println("High Temperature");
  delay(1000);
  digitalWrite(2,0);
}
if(Temp>500){
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("High Temperature");
  digitalWrite(3,1);
  delay(1000);
  digitalWrite(3,0);
}
if((Ldr>50)&&(Ldr<300)){
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("High Lumination");
  digitalWrite(2,1);
  delay(1000);
  digitalWrite(2,0);
}
if(Ldr>500){
  lcd.clear();
  lcd.setCursor(0,1);
  lcd.print("High Lumination");
  digitalWrite(3,1);
  delay(1000);
  digitalWrite(3,0);
}

}
 
 
 


