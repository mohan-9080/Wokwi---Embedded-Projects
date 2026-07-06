void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 pinMode(A0, INPUT);
 pinMode(A1, INPUT);
 pinMode(2, OUTPUT);
 pinMode(3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int Temp=analogRead(A0);
Serial.print("Temp value=");
Serial.println(Temp);
delay(1000);
int Ldr=analogRead(A1);
Serial.print("Ldr value=");
Serial.println(Ldr);
delay(1000);

if((Temp>50)&&(Temp<300)){
  digitalWrite(2,1);
  delay(1000);
  digitalWrite(2,0);
}
if(Temp>500){
  digitalWrite(3,1);
  delay(1000);
  digitalWrite(3,0);
}
if((Ldr>50)&&(Ldr<300)){
  digitalWrite(2,1);
  delay(1000);
  digitalWrite(2,0);
}
if(Ldr>500){
  digitalWrite(3,1);
  delay(1000);
  digitalWrite(3,0);
}

}

