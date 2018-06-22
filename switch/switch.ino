const int pinSwitch =13;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinSwitch, INPUT);
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("tmp"+String(digitalRead));
  if(!digitalRead(pinSwitch)
  { Serial.println("Pushed"); }

}
