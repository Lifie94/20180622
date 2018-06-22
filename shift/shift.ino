void setup() {
 Serial.begin(115200);
 int tmp = 123;

 Serial.println("123의 10진수는 :" +String(tmp));
 Serial.print("123의 2진수는 :");
 Serial.println(tmp, BIN);

 tmp = tmp <<2 ;

 Serial.println("123의 10진수는 :" +String(tmp));
 Serial.print("123의 2진수는 :");
 Serial.println(tmp, BIN);
 
}

void loop() {
  // put your main code here, to run repeatedly:

}
