const int aPinFndData[8]= { 13,12,11,10,9,8,7,6};
const int aPinFndSelect[6] = {22,23,24,25,26,27};




const int aFndData[10]={0x3F,0x06,0x5B,0x4F,0x66,0x7D,0X27,0x7F,0x6F};// 0~9 까지의 16진수
const int aFndSelect[6]={ 0x3E,0x3D,0x3B,0x37,0x2F,0x1F};


void setup() {
  for( int i=0; i<8 ; i++){
    pinMode(aPinFndData[i], OUTPUT); }
  for(int i=0; i<6; i++){
    pinMode(aPinFndSelect[i],OUTPUT);
    
  }

  }


void loop() {


displaySelect(aFndSelect[5]);  //10만 자리에 1표현
displayNumber(aFndData[1]);
delay(1);


displaySelect(aFndSelect[4]);  //1만 자리에 1표현
displayNumber(aFndData[2]);
delay(1);


displaySelect(aFndSelect[3]);  //1000의 자리에 1표현
displayNumber(aFndData[3]);
delay(1);

  
displaySelect(aFndSelect[2]);  //100 자리의
displayNumber(aFndData[4]);
delay(1);


displaySelect(aFndSelect[1]);  //10자리의
displayNumber(aFndData[5]);
delay(1);

displaySelect(aFndSelect[0]);  //1자리의
displayNumber(aFndData[6]);
delay(1);
  
  
}




