int pinLed =13;
int pinInterrupt =0;
int state = LOW;

void setup() {
  pinMode(pinLed, OUTPUT);
  attachInterrupt(pinInterrupt,,CHANGE);
  

}

void loop() {
  

}

void blink(){
  state = !state;
  digitalWrite(pinLed,state);
}

