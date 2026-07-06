#define trig 27
int echo=14;

long duration;
int distance;


void setup() {
  Serial.begin(9600);
  
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  pinMode(32,OUTPUT);
}

void loop() {

digitalWrite(trig, LOW);
delayMicroseconds(2);
digitalWrite(trig, HIGH);
delayMicroseconds(2);
digitalWrite(trig, LOW);
delayMicroseconds(2);


duration=pulseIn(echo,HIGH);
distance=duration/58;
int D=duration/148;


  Serial.print("distance value(cm)=");
  Serial.print(distance);
  Serial.print("    distance value(inches)=");
  Serial.println(duration);
  delay(1000);
  Serial.println("obstacle detected");

if(D>40){
  digitalWrite(32, HIGH);
  delay(2000);
  digitalWrite(32, LOW);

}
}

