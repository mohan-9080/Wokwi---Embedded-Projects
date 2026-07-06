void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int s=digitalRead(3);
  int t=digitalRead(4); 
   if((s==0)&&(t==1)){
    digitalWrite(1,0);
    digitalWrite(2,1);
    digitalWrite(8,0);
    digitalWrite(9,1);
    
  }
  else if((s==1)&&(t==0)){
    digitalWrite(1,1);
    digitalWrite(2,0);
    digitalWrite(8,1);
    digitalWrite(9,0);
    
  }
  else if((s==1)&&(t==1)){
    digitalWrite(1,1);
    digitalWrite(2,1);
    digitalWrite(8,1);
    digitalWrite(9,1);
    
  }
  else{
    digitalWrite(1,0);
    digitalWrite(2,0);
    digitalWrite(8,0);
    digitalWrite(9,0);
    
  }
}
