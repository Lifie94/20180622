void displayNumber(int tmp){
  for(int j=0; j<8; j++){                          
  digitalWrite(aPinFndData[j],(tmp >> j)&1);
 }
}

void displaySelect(int tmp){
   for(int j=0; j<6; j++){                          
  digitalWrite(aPinFndSelect[j],(tmp >> j)&1);
 }
}

