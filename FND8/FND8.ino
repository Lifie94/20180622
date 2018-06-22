const int aPinFndData[8]= { 13,12,11,10,9,8,7,6};
const int aPinFndSelect[6] = {22,23,24,25,26,27};
int count =0;

int aFndData[10] ={0x3F,0x06, 0x5B, 0x4F, 0x66, 0x6D,0x7D,0x27,0x7F,0x6F};
int aFndSelect[6]={0x3E,0x3D,0x3B,0x37, 0x2F,0x1F};

void displayNumber(int tmp) {
  for(int i=0; i<8; i++)
  {
    digitalWrite(aPinFndData[i], (tmp >>i) & 0x01);
  }
}

void displaySelect(int tmp){
  for(int i=0; i<6; i++)
  {
    digitalWrite(aPinFndSelect[i],(tmp >>i) & 0x01);
  }
}

void setup() {
    for(int i=0; i<8; i++)
  {
    pinMode(aPinFndData[i],OUTPUT);
  }
  for(int i=0; i<6 ; i++){
    pinMode(aPinFndSelect[i],OUTPUT);
  }

  attachInterrupt(0,countUp,FALLING);
  attachInterrupt(3,countClear,FALLING);
 
  }


void loop() {
  displaySelect(aFndSelect[2]);
  displayNumber(aFndData[count/100]);
  delay(1);
   displaySelect(aFndSelect[1]);
  displayNumber(aFndData[count%100/10]);
  delay(1);
   displaySelect(aFndSelect[0]);
  displayNumber(aFndData[count%10]);
  delay(1);
  
  
  
}

void countUp(){
  count ++;
}
void countClear(){
  count =0;
}

