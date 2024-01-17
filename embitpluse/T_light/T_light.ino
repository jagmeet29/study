int r[]={0,3,6,9};
int o[]={1,4,7,10};
int g[]={2,5,8,11};
volatile int i,k,l,m,j=0;
void setup() {
  for (i=0;i<3;i++){
  pinMode(r[i],OUTPUT);
  pinMode(o[i],OUTPUT);
  pinMode(g[i],OUTPUT);}
  // put your setup code here, to run once:

}

void loop() { 
   for (i=0;i<4;i++) {
    digitalWrite(r[i], LOW);
     digitalWrite(g[i], LOW);
     digitalWrite(o[i], LOW);}

for (i=0;i<4;i++){
  digitalWrite(g[j], HIGH);
  if (j!=i) {digitalWrite(r[i],HIGH);}}
  delay(5000);
  for (i=0;i<4;i++) {
     digitalWrite(r[i],LOW);
     digitalWrite(g[i],LOW);}
     
if (j==0) {k=1;l=2;m=3;}
if (j==1) {k=2;l=3;m=0;}
if (j==2) {k=3;l=0;m=1;}
if (j==3) {k=0;l=1;m=2;}

     digitalWrite(o[j],HIGH);
     digitalWrite(o[k],HIGH);
     digitalWrite(r[l],HIGH);
     digitalWrite(r[m],HIGH);
     delay(2000);
     j++;
if (j==4) {j=0;}
}
     
