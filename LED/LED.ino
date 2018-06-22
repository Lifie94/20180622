int pinLed =13;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(pinLed,OUTPUT);

Serial.println("O : LED 켜기 // x: LED 끄기");
}

void loop() {
  // put your main code here, to run repeatedly:

}

void serialEvent(void) { 
  char ch;
  ch = Serial.read();
  Serial.println("입력된값"+String(ch));

  if(ch == 'O' || ch == 'o'){
    Serial.println("LED ON");
    digitalWrite(pinLed,HIGH);
    
  }
  else{
    Serial.println("LED OFF");
    digitalWrite(pinLed,LOW);
  }

}
