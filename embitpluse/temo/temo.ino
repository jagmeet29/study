float tempc,tempf,vout;
const int s=A1;
void setup () {
  pinMode(s, INPUT);
  Serial.begin(9600);
}
void loop () {
  vout=analogRead(s);
  vout=(vout*500)/1023;
  tempc=vout;
  tempf=(vout*1.8)+32;
  Serial.print("Degreec");
  Serial.print(tempc);
  Serial.println();
  Serial.print("f=");
  Serial.print(tempf);
  Serial.println();
  delay(1000);
}
