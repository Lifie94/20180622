const int pinLed = 13;
const int pinSwitch =2;

bool flagLed = false;  // LED ON// OFF 유무확인

void setup() {
  
  Serial.begin(115200);
  pinMode(pinLed, OUTPUT);
  pinMode(pinSwitch,INPUT);
  Serial.println("SWITCH/ LED Application");
  

}

void loop() {

  if(!digitalRead(pinSwitch)){
   if(flagLed== false){            
     digitalWrite(pinLed, HIGH);
    Serial.println("LED ON");
    flagLed = true;
    
   }
   else{               
    digitalWrite(pinLed, LOW);
    Serial.println("LED OFF");
    flagLed = false;
   }
   
  }

}
