const int pinLed[4]={13,14,15,16};
const int pinSwitch[8]={2,3,4,5,6,7,8,9};


bool FlagLed[4]={false};

void setup() {
  Serial.begin(115200);
 /* for(int i =0; i<4; i++)
  {
    pinMode(pinLed[i],OUTPUT);
    pinMode(pinSwitch[i],INPUT);
  }
 */  
 //강사님 방법

pinMode(pinLed,OUTPUT);
pinMode(pinSwitch,INPUT);
Serial.println("SWITCH / LED Application");

}

void loop() {
  for(int i=0; i<4; i++){
    if(digitalRead(pinSwitch[i])==0){
      if(FlagLed[i] == false){
        digitalWrite(pinLed[i],HIGH);
        Serial.println(String(i+1) + "#Pushed");
        FlagLed[i]=true;
      }
     else{
     digitalWrite(pinLed[i],LOW);
     Serial.println(String(i+1)+"#LED OFF");
     FlagLed[i]= false;
    }
      }
    }
  }


