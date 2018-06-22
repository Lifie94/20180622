const int aPinFndData[8]= { 13,12,11,10,9,8,7,6};
const int aPinFndSelect[6] = {22,23,24,25,26,27};


void setup() {
  for( int i=0; i<8 ; i++){
    pinMode(aPinFndData[i], OUTPUT);
    
  }
  for(int i=0; i<6; i++){
    pinMode(aPinFndSelect[i],OUTPUT);
    digitalWrite(aPinFndSelect[1],LOW);
  }


}

void loop() {



 digitalWrite(aPinFndSelect[0],LOW);  // LED 위치,
 digitalWrite(aPinFndSelect[1],HIGH);
 digitalWrite(aPinFndSelect[2],HIGH);
 digitalWrite(aPinFndSelect[3],HIGH);
 digitalWrite(aPinFndSelect[4],HIGH);
 digitalWrite(aPinFndSelect[5],HIGH);
 
  
 //// 0번위치 숫자 0번 표기
 

 digitalWrite(aPinFndData[0],HIGH); // 13번핀 -A
 digitalWrite(aPinFndData[1],HIGH);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],HIGH);
 digitalWrite(aPinFndData[4],HIGH);
 digitalWrite(aPinFndData[5],HIGH); // 8번핀 -F
 digitalWrite(aPinFndData[6],LOW); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP


 delay(1000);


 // 숫자 1번 표기
 
 digitalWrite(aPinFndData[0],LOW); // 13번핀 -A
 digitalWrite(aPinFndData[1],HIGH);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],LOW);
 digitalWrite(aPinFndData[4],LOW);
 digitalWrite(aPinFndData[5],LOW); // 8번핀 -F
 digitalWrite(aPinFndData[6],LOW); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP

 delay(1000);

 
 // 숫자 2번 표기
 
 digitalWrite(aPinFndData[0],HIGH); // 13번핀 -A
 digitalWrite(aPinFndData[1],HIGH);
 digitalWrite(aPinFndData[2],LOW);  // 11번핀 -C
 digitalWrite(aPinFndData[3],HIGH);
 digitalWrite(aPinFndData[4],HIGH);
 digitalWrite(aPinFndData[5],LOW); // 8번핀 -F
 digitalWrite(aPinFndData[6],HIGH); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP
 

 
 delay(1000);


//3번
digitalWrite(aPinFndData[0],HIGH); // 13번핀 -A
 digitalWrite(aPinFndData[1],HIGH);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],HIGH);
 digitalWrite(aPinFndData[4],LOW);
 digitalWrite(aPinFndData[5],LOW); // 8번핀 -F
 digitalWrite(aPinFndData[6],HIGH); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP

 
 delay(1000);



//4번
 digitalWrite(aPinFndData[0],LOW); // 13번핀 -A
 digitalWrite(aPinFndData[1],HIGH);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],LOW);
 digitalWrite(aPinFndData[4],LOW);
 digitalWrite(aPinFndData[5],HIGH); // 8번핀 -F
 digitalWrite(aPinFndData[6],HIGH); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP

 
 delay(1000);
 

//5번

 digitalWrite(aPinFndData[0],HIGH); // 13번핀 -A
 digitalWrite(aPinFndData[1],LOW);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],HIGH);
 digitalWrite(aPinFndData[4],LOW);
 digitalWrite(aPinFndData[5],HIGH); // 8번핀 -F
 digitalWrite(aPinFndData[6],HIGH); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP


 delay(1000);

//6번

digitalWrite(aPinFndData[0],LOW); // 13번핀 -A
 digitalWrite(aPinFndData[1],LOW);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],HIGH);
 digitalWrite(aPinFndData[4],HIGH);
 digitalWrite(aPinFndData[5],HIGH); // 8번핀 -F
 digitalWrite(aPinFndData[6],HIGH); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP

 delay(1000);


//7번

digitalWrite(aPinFndData[0],HIGH); // 13번핀 -A
 digitalWrite(aPinFndData[1],HIGH);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],LOW);
 digitalWrite(aPinFndData[4],LOW);
 digitalWrite(aPinFndData[5],LOW); // 8번핀 -F
 digitalWrite(aPinFndData[6],LOW); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP

delay(1000);

//8번

 digitalWrite(aPinFndData[0],HIGH); // 13번핀 -A
 digitalWrite(aPinFndData[1],HIGH);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],HIGH);
 digitalWrite(aPinFndData[4],HIGH);
 digitalWrite(aPinFndData[5],HIGH); // 8번핀 -F
 digitalWrite(aPinFndData[6],HIGH); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP

delay(1000);

//9번

 digitalWrite(aPinFndData[0],HIGH); // 13번핀 -A
 digitalWrite(aPinFndData[1],HIGH);
 digitalWrite(aPinFndData[2],HIGH);  // 11번핀 -C
 digitalWrite(aPinFndData[3],LOW);
 digitalWrite(aPinFndData[4],LOW);
 digitalWrite(aPinFndData[5],HIGH); // 8번핀 -F
 digitalWrite(aPinFndData[6],HIGH); //  7번핀 -G
 digitalWrite(aPinFndData[7],LOW); // 6번핀 - data DP

 delay(1000);
}
