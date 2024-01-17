int LED[ ]={2,3,4,5,6,7,8,9};
void setup() {
    for (int i=0 ;i<8;i++){
      pinMode(LED[i],OUTPUT);
      }
  // put your setup code here, to run once:

}

void loop() {
  digitalWrite(LED[0],HIGH);
  delay(250);
  digitalWrite(LED[1],HIGH);
  delay(250);
  digitalWrite(LED[2],HIGH);
  delay(250);
  digitalWrite(LED[3],HIGH);
  delay(250);
  digitalWrite(LED[4],HIGH);
delay(250);
  digitalWrite(LED[5],HIGH);
delay(250);
  digitalWrite(LED[6],HIGH);
delay(250);
  digitalWrite(LED[7],HIGH);
delay(250);

 for (int i=0 ;i<8;i++){digitalWrite(LED[i],LOW);}
 digitalWrite(LED[0],HIGH);
 digitalWrite(LED[2],HIGH);
 digitalWrite(LED[4],HIGH);
 digitalWrite(LED[6],HIGH);
 delay(1000);
 
 for (int i=0 ;i<8;i++){digitalWrite(LED[i],LOW);}
 digitalWrite(LED[1],HIGH);
 digitalWrite(LED[3],HIGH);
 digitalWrite(LED[5],HIGH);
 digitalWrite(LED[7],HIGH);
 delay(1000);


 for (int i=0 ;i<8;i++){digitalWrite(LED[i],HIGH);}
digitalWrite(LED[7],LOW);
  delay(250);
  digitalWrite(LED[6],LOW);
  delay(250);
  digitalWrite(LED[5],LOW);
  delay(250);
  digitalWrite(LED[4],LOW);
  delay(250);
  digitalWrite(LED[3],LOW);
delay(250);
  digitalWrite(LED[2],LOW);
delay(250);
  digitalWrite(LED[1],LOW);
delay(250);
  digitalWrite(LED[0],LOW);
delay(250);
  // put your main code here, to run repeatedly:

 for (int i=1 ;i<9;i++) {
   digitalWrite(LED[i-1],HIGH);
   digitalWrite(LED[i+2],LOW);
   delay(700);   
   digitalWrite(LED[i-1],LOW);
 }

}
