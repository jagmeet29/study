const int LED[]={2,3,4,5,6,7,8,9};
const int D[]={10};
void setup() {
  int i;
  int j;
  for (i=0;i<8;i++) {
  pinMode(LED[i],OUTPUT);
  }
  for (j=0;j<4;j++) {pinMode(D[j],OUTPUT);}
  // put your setup code here, to run once:
}

void display (int number) {
  
  switch (number){

  case 0 :
digitalWrite(LED[0],HIGH); //A
digitalWrite(LED[1],HIGH); //B
digitalWrite(LED[2],HIGH); //C
digitalWrite(LED[3],HIGH); //D
digitalWrite(LED[4],HIGH); //E
digitalWrite(LED[5],HIGH); //F
digitalWrite(LED[6],LOW); //G
digitalWrite(LED[7],LOW); //DP
break;

case 1 :
digitalWrite(LED[0],LOW); //A
digitalWrite(LED[1],HIGH); //B
digitalWrite(LED[2],HIGH); //C
digitalWrite(LED[3],LOW); //D
digitalWrite(LED[4],LOW); //E
digitalWrite(LED[5],LOW); //F
digitalWrite(LED[6],LOW); //G
digitalWrite(LED[7],LOW); //DP
break;

case 2 :
digitalWrite(LED[0],HIGH); //A
digitalWrite(LED[1],HIGH); //B
digitalWrite(LED[2],LOW); //C
digitalWrite(LED[3],HIGH); //D
digitalWrite(LED[4],HIGH); //E
digitalWrite(LED[5],LOW); //F
digitalWrite(LED[6],HIGH); //G
digitalWrite(LED[7],LOW); //DP
break;

case 3 :
digitalWrite(LED[0],HIGH); //A
digitalWrite(LED[1],HIGH); //B
digitalWrite(LED[2],HIGH); //C
digitalWrite(LED[3],HIGH); //D
digitalWrite(LED[4],LOW); //E
digitalWrite(LED[5],LOW); //F
digitalWrite(LED[6],HIGH); //G
digitalWrite(LED[7],LOW); //DP
break;

case 4 :
digitalWrite(LED[0],LOW); //A
digitalWrite(LED[1],HIGH); //B
digitalWrite(LED[2],HIGH); //C
digitalWrite(LED[3],LOW); //D
digitalWrite(LED[4],LOW); //E
digitalWrite(LED[5],HIGH); //F
digitalWrite(LED[6],HIGH); //G
digitalWrite(LED[7],LOW); //DP
break;

case 5 :
digitalWrite(LED[0],HIGH); //A
digitalWrite(LED[1],LOW); //B
digitalWrite(LED[2],HIGH); //C
digitalWrite(LED[3],HIGH); //D
digitalWrite(LED[4],LOW); //E
digitalWrite(LED[5],HIGH); //F
digitalWrite(LED[6],HIGH); //G
digitalWrite(LED[7],LOW); //DP
break;

case 6 :
digitalWrite(LED[0],HIGH); //A
digitalWrite(LED[1],LOW); //B
digitalWrite(LED[2],HIGH); //C
digitalWrite(LED[3],HIGH); //D
digitalWrite(LED[4],HIGH); //E
digitalWrite(LED[5],HIGH); //F
digitalWrite(LED[6],HIGH); //G
digitalWrite(LED[7],LOW); //DP
break;

case 7 :
digitalWrite(LED[0],HIGH); //A
digitalWrite(LED[1],HIGH); //B
digitalWrite(LED[2],HIGH); //C
digitalWrite(LED[3],LOW); //D
digitalWrite(LED[4],LOW); //E
digitalWrite(LED[5],LOW); //F
digitalWrite(LED[6],LOW); //G
digitalWrite(LED[7],LOW); //DP
break;

case 8 :
digitalWrite(LED[0],HIGH); //A
digitalWrite(LED[1],HIGH); //B
digitalWrite(LED[2],HIGH); //C
digitalWrite(LED[3],HIGH); //D
digitalWrite(LED[4],HIGH); //E
digitalWrite(LED[5],HIGH); //F
digitalWrite(LED[6],HIGH); //G
digitalWrite(LED[7],LOW); //DP
break;

case 9 :
digitalWrite(LED[0],HIGH); //A
digitalWrite(LED[1],HIGH); //B
digitalWrite(LED[2],HIGH); //C
digitalWrite(LED[3],HIGH); //D
digitalWrite(LED[4],LOW); //E
digitalWrite(LED[5],HIGH); //F
digitalWrite(LED[6],HIGH); //G
digitalWrite(LED[7],LOW); //DP
break;

case 10 :
digitalWrite(LED[0],HIGH); //A
digitalWrite(LED[1],HIGH); //B
digitalWrite(LED[2],HIGH); //C
digitalWrite(LED[3],HIGH); //D
digitalWrite(LED[4],HIGH); //E
digitalWrite(LED[5],HIGH); //F
digitalWrite(LED[6],LOW); //G
digitalWrite(LED[7],LOW); //DP}
break;
}
}

void loop(){
int k;
for (k=0;k<10;k++){
  display (k);
  delay(100);
  if (k==9) {break;}
  }
}