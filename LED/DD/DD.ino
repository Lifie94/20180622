int button[8]={2,3,4,5,6,7,8,9};

//int button1=3;
int pin=13;

void setup() {
  Serial.begin(115200);
  pinMode(button[8],INPUT);
  pinMode(pin,OUTPUT);
  //pinMode(button1,INPUT);
  
  

}

void loop() {
  int ch;
  if(!digitalRead(button[0])||!digitalRead(button[1]))
  {
    digitalWrite(pin,HIGH);
    ch=1;
  }
if(ch==1&&!digitalRead(button[0]))
{
 digitalWrite(pin,LOW);
 ch=0;
}
  
}

/*void serialEvent(void)
{
 // if(!digitalRead(button))
  //{
    //digitalWrite(pin,HIGH);
  //}
}
*/

