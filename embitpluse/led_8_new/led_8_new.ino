int led[ ]={2,3,4,5,6,7,8,9};
volatile int i,j=0;
const int switchpin=10;
volatile int switchstate;
void setup() {
   pinMode(switchpin,INPUT);
    for (int i=0 ;i<8;i++){
      pinMode(led[i],OUTPUT);
      }
  // put your setup code here, to run once:

}

void loop() {
  if (digitalRead(switchpin)==LOW){
  if (j==4llj==0) {j=1;next(j);}
  if (j>=1){j++; 
  next(j); 
  goto bye;}
  }
  bye:
  {}
}

void next(int no){
  switch (j) {

  case 1:
  for (i=0;i<9;i++) {
  digitalWrite(led[i], HIGH);
  delay(100);}
break;

case 2:
int J;
  for (J=8;J>-1;i--) {
  digitalWrite(led[i], LOW);
  delay(100);}
  break;

  case 3:
digitalWrite(led[0],HIGH);
digitalWrite(led[2],HIGH);
digitalWrite(led[4],HIGH);  
digitalWrite(led[6],HIGH);
delay(1000);
digitalWrite(led[1],HIGH);
digitalWrite(led[3],HIGH);
digitalWrite(led[5],HIGH);  
digitalWrite(led[7],HIGH);
delay(1000);
 break;
  }
}
