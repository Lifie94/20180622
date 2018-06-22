const int aPinFndData[8]= { 13,12,11,10,9,8,7,6};
const int aPinFndSelect[6] = {22,23,24,25,26,27};




const int aFndData[10]={0x3F,0x06,0x5B,0x4F,0x66,0x7D,0X27,0x7F,0x6F};// 0~9 까지의 16진수


void setup() {
  for( int i=0; i<8 ; i++){
    pinMode(aPinFndData[i], OUTPUT); }
  for(int i=0; i<6; i++){
    pinMode(aPinFndSelect[i],OUTPUT);
    
  }

  }


void loop() {


for(int i=0; i<8; i++)  //i 0~9까지 숫자
{
 for(int j=0; j<8; j++){                            // A~DP까지 LED ON/OFF
  digitalWrite(aPinFndData[j],aFndData[i] >> j&1);
 }
 delay(1000);

}






 digitalWrite(aPinFndSelect[0],LOW);
digitalWrite(aPinFndSelect[1],LOW);
digitalWrite(aPinFndSelect[2],LOW);
digitalWrite(aPinFndSelect[3],LOW);
digitalWrite(aPinFndSelect[4],LOW);
digitalWrite(aPinFndSelect[5],LOW);






  
}




