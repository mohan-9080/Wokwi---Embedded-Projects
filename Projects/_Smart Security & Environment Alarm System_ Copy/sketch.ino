#include<DHT.h>
DHT dht(13,DHT22); 

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

#define trig 3
int echo=2;

long duration;
int distance;

#define BUZZER_PIN 9                                            
                                            



void setup() {
  Serial.begin(9600);
  Serial.println("DHT22, LCD);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);

   lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Initializing...");
  delay(2000);
  lcd.clear();
  dht.begin();
  pinMode(36, INPUT);
  pinMode(8,OUTPUT);
  digitalWrite(8,1);
  pinMode(BUZZER_PIN, OUTPUT);


pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(10, OUTPUT);
pinMode(11, OUTPUT);

pinMode(6, OUTPUT);
pinMode(A1, INPUT)


pinMode(1,INPUT);






  duration=pulseIn(echo,HIGH);
distance=duration/58;
int D=duration/148;

}

void loop() {
  // put your main code here, to run repeatedly:
  int  temperature = dht.readTemperature();
 int humidity = dht.readHumidity();




    lcd.setCursor(0,1);
    lcd.print("H: ");
    lcd.print(humidity);
    lcd.setCursor(0,0);
    lcd.print("T: "); 
    lcd.print(temperature);
    lcd.setCursor(1,0);
    lcd.print("U: "); 
    lcd.print(ultra);
    lcd.setCursor(1,0);
    lcd.print("L: "); 
    lcd.print(ldr);
    lcd.setCursor(0,0);
    lcd.print("P: "); 
    lcd.print(pir);

    Serial.print("L=");
    Serial.println(ldr);
    Serial.print("T=");
    Serial.println(temperature);
    Serial.print("H=");
    Serial.println(humidity);
    Serial.print("U=");
    Serial.println(ultra);
    Serial.print("P=");
    Serial.println(pir);




    if (temperature > 40 )
{
  digitalWrite(BUZZER_PIN, HIGH);

}
    if (humidity > 70 )
{
  digitalWrite(BUZZER_PIN, HIGH);

}


Serial.print("distance value(cm)=");.print(distance);
  Serial.print("    distance value(inches)=");
  Serial.println(duration);
  delay(1000);
  Serial.println("obstacle detected");



if(U>30) { 
digitalWrite(10,1);
digitalWrite(11,0);
digitalWrite(4,1);
digitalWrite(5,0);
delay(2000);
}

if(U<30) { 
digitalWrite(10,0);
digitalWrite(11,0);
digitalWrite(4,0);
digitalWrite(5,0);
delay(2000);
}

if(Ldr<100 && Pir=1){
  digitalWrite(6, HIGH);
}
