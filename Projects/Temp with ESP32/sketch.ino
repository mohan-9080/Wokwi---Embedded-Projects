#include<DHT.h>
DHT dht(14,DHT22);


void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(36, INPUT);
  pinMode(12, OUTPUT);
  pinMode(27, OUTPUT);
}

void loop() {


  float h=dht.readHumidity(); 
  float t=dht.readTemperature(); 


  Serial.print("Temp value=");
  Serial.print(t);
  Serial.print("    Humi value=");
  Serial.println(h);
  delay(1000);


if(Temp value=>50){
  digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12, LOW);
}


if(Humi value=>30){
  digitalWrite(27, HIGH);
  delay(2000);
  digitalWrite(27, LOW);
}
}




