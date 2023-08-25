byte ledPins[]={3,4,5,6,7,8,9,10};
 // 01110011 s
 // 01101101 m
 // 01100001 a
 // 01110010 r
 // 01110100 t
void setup()
{
  for (byte i=3;i<8;i++){
  pinMode(ledPins[i], OUTPUT);}
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available()>0){
char  x=Serial.read();
    for (byte i=0;i<=7;i++){
      digitalWrite(ledPins[i],x&1<<i);}
  }}