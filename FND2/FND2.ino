const int aPinFndData[8]= { 13,12,11,10,9,8,7,6};
const int aPinFndSelect[6] = {22,23,24,25,26,27};


void setup() {
  for( int i=0; i<8 ; i++){
    pinMode(aPinFndData[i], OUTPUT);
    
  }
  for(int i=0; i<6; i++){
    pinMode(aPinFndSelect[i],OUTPUT);
    digitalWrite(aPinFndSelect[i],LOW);
  }


}

void loop() {



 digitalWrite(aPinFndSelect[0],HIGH);
digitalWrite(aPinFndSelect[1],HIGH);
 digitalWrite(aPinFndSelect[1],HIGH);
digitalWrite(aPinFndSelect[2],HIGH);
digitalWrite(aPinFndSelect[3],HIGH);
digitalWrite(aPinFndSelect[4],HIGH);
digitalWrite(aPinFndSelect[5],HIGH);
  delay(1000);

 

for(int i=0; i<10; i++){
  displayNumber(i);
  delay(1000);
 }

 
  
}


void displayNumber(int tmp){
  switch(tmp){
    case 0:
    digitalWrite(aPinFndSelect[0],LOW);
 digitalWrite(aPinFndData[0],HIGH); // 13번핀 -A
 digitalWrite(aPinFndData[1],HIGH);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],HIGH);
 digitalWrite(aPinFndData[4],HIGH);
 digitalWrite(aPinFndData[5],HIGH); // 8번핀 -F
 digitalWrite(aPinFndData[6],LOW); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP
 delay(1);
  digitalWrite(aPinFndSelect[0],HIGH);
  
break;

    case 1:
     digitalWrite(aPinFndSelect[1],LOW);
 digitalWrite(aPinFndData[0],LOW); // 13번핀 -A
 digitalWrite(aPinFndData[1],HIGH);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],LOW);
 digitalWrite(aPinFndData[4],LOW);
 digitalWrite(aPinFndData[5],LOW); // 8번핀 -F
 digitalWrite(aPinFndData[6],LOW); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP
 delay(1);
 digitalWrite(aPinFndSelect[1],HIGH);

 break;
    case 2:
    digitalWrite(aPinFndSelect[2],LOW);
    digitalWrite(aPinFndData[0],HIGH); // 13번핀 -A
 digitalWrite(aPinFndData[1],HIGH);
 digitalWrite(aPinFndData[2],LOW);  // 11번핀 -C
 digitalWrite(aPinFndData[3],HIGH);
 digitalWrite(aPinFndData[4],HIGH);
 digitalWrite(aPinFndData[5],LOW); // 8번핀 -F
 digitalWrite(aPinFndData[6],HIGH); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP
 delay(1);
 digitalWrite(aPinFndSelect[2],HIGH);

 break;
    case 3:
    digitalWrite(aPinFndSelect[3],LOW);
    digitalWrite(aPinFndData[0],HIGH); // 13번핀 -A
 digitalWrite(aPinFndData[1],HIGH);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],HIGH);
 digitalWrite(aPinFndData[4],LOW);
 digitalWrite(aPinFndData[5],LOW); // 8번핀 -F
 digitalWrite(aPinFndData[6],HIGH); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP
 delay(1);
 digitalWrite(aPinFndSelect[3],HIGH);

 break;
    case 4:
    digitalWrite(aPinFndData[0],LOW); // 13번핀 -A
 digitalWrite(aPinFndData[1],HIGH);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],LOW);
 digitalWrite(aPinFndData[4],LOW);
 digitalWrite(aPinFndData[5],HIGH); // 8번핀 -F
 digitalWrite(aPinFndData[6],HIGH); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP

 break;

    case 5:
    digitalWrite(aPinFndData[0],HIGH); // 13번핀 -A
 digitalWrite(aPinFndData[1],LOW);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],HIGH);
 digitalWrite(aPinFndData[4],LOW);
 digitalWrite(aPinFndData[5],HIGH); // 8번핀 -F
 digitalWrite(aPinFndData[6],HIGH); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP

 break;
    case 6:
    digitalWrite(aPinFndData[0],LOW); // 13번핀 -A
 digitalWrite(aPinFndData[1],LOW);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],HIGH);
 digitalWrite(aPinFndData[4],HIGH);
 digitalWrite(aPinFndData[5],HIGH); // 8번핀 -F
 digitalWrite(aPinFndData[6],HIGH); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP
    case 7:
    digitalWrite(aPinFndData[0],HIGH); // 13번핀 -A
 digitalWrite(aPinFndData[1],HIGH);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],LOW);
 digitalWrite(aPinFndData[4],LOW);
 digitalWrite(aPinFndData[5],LOW); // 8번핀 -F
 digitalWrite(aPinFndData[6],LOW); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP

 break;
    case 8:
    digitalWrite(aPinFndData[0],HIGH); // 13번핀 -A
 digitalWrite(aPinFndData[1],HIGH);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],HIGH);
 digitalWrite(aPinFndData[4],HIGH);
 digitalWrite(aPinFndData[5],HIGH); // 8번핀 -F
 digitalWrite(aPinFndData[6],HIGH); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP

 break;
    case 9:
    digitalWrite(aPinFndData[0],HIGH); // 13번핀 -A
 digitalWrite(aPinFndData[1],HIGH);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],LOW);
 digitalWrite(aPinFndData[4],LOW);
 digitalWrite(aPinFndData[5],HIGH); // 8번핀 -F
 digitalWrite(aPinFndData[6],HIGH); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP

 break;
  }
}

