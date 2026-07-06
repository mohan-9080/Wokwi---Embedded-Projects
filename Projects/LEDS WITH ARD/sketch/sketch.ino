void setup() {
 Serial.begin(9600);
 Serial.println(("ready"));
 pinMode(8, OUTPUT);
 pinMode(6, OUTPUT);
 pinMode(7, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(10, OUTPUT);
 
}

void loop() {
  if(Serial.available()>0){
    char command=Serial.read();
    Serial.println(command);
    if(command=='A'){
      digitalWrite(8,1);
    }
    if(command=='B'){
      digitalWrite(8,0);
    }
    if(command=='C'){
      digitalWrite(7,1);
    }
    if(command=='D'){
      digitalWrite(7,0);
    }
    if(command=='E'){
      digitalWrite(6,1);
    }
    if(command=='F'){
      digitalWrite(6,0);
    }
    if(command=='G'){
      digitalWrite(9,1);
    }
    if(command=='H'){
      digitalWrite(9,0);
    }   
    if(command=='X'){   
    digitalWrite(10,1);
    }
    if(command=='Y'){
      digitalWrite(10,0);
    }
    if(command=='O'){
      digitalWrite(6,1);
      digitalWrite(7,1);
      digitalWrite(8,1);
      digitalWrite(9,1);
      digitalWrite(10,1);
    }
    if(command=='Z'){
      digitalWrite(6,0);
      digitalWrite(7,0);
      digitalWrite(8,0);
      digitalWrite(9,0);
      digitalWrite(10,0);
    }

    
  
    





  }
}











