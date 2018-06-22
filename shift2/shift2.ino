const int aPinFndData[8]= { 13,12,11,10,9,8,7,6};
const int aPinFndSelect[6] = {22,23,24,25,26,27};

int aFndData[10] ={0x3F,0x06, 0x5B, 0x4F, 0x66, 0x6D,0x7D,0x27,0x7F,0x6F};
int aFndSelect[6]={0x3E,0x3D,0x3E,0x2F,0x1F};

void setup() {
  for(int i=0; i<8; i++)
  {
    pinMode(aPinFndData[i],OUTPUT);
  }
  for(int i=0; i<6 ; i++){
    pinMode(aPinFndSelect[i],OUTPUT);
  }

}

void loop() {
/*
digitalWrite(aPinFndData[0],aFndData[0]>>0&1);
digitalWrite(aPinFndData[0],aFndData[0]>>1&1);
digitalWrite(aPinFndData[0],aFndData[0]>>2&1);
digitalWrite(aPinFndData[0],aFndData[0]>>3&1);
digitalWrite(aPinFndData[0],aFndData[0]>>4&1);
digitalWrite(aPinFndData[0],aFndData[0]>>5&1);
digitalWrite(aPinFndData[0],aFndData[0]>>6&1);
digitalWrite(aPinFndData[0],aFndData[0]>>7&1);
*/

for(int i=0; i <8; i++){
  digitalWrite(aPinFndData[i],(aFndData[0]>>i)&1);
}
}
