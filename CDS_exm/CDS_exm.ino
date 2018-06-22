const int pinCds = A0;
const int pinVcc =13;
const int pinGnd =12;




void setup() {
  // put your setup code here, to run once:
  pinMode(pinCds,INPUT);
  pinMode(pinVcc,OUTPUT);
  pinMode(pinGnd,OUTPUT);
  Serial.begin(115200);

  digitalWrite(pinVcc,HIGH);
  digitalWrite(pinGnd,LOW);

}

void loop() {
 int adcData = analogRead(pinCds);
 Serial.println("adc 값은"+String(adcData));
 delay(1000);

}
