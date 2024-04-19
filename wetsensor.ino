int lmt1 =3;
int lmt2=5;
int rmt1=6;
int rmt2=11;
int wetsensor=2;
int wetvalue;
void setup(){
  pinMode(wetsensor, INPUT);
  pinMode(lmt1, OUTPUT);
  pinMode(lmt2, OUTPUT);
  pinMode(rmt1, OUTPUT);
  pinMode(rmt2, OUTPUT);
}
void loop(){
  wetvalue =digitalRead(2);
  if(wetvalue==LOW){
    forward();
    delay(1000);
    reverse();
    delay(1000);
  }
  else{
    stop();
  }
}
void forward(){
  analogWrite(lmt1, 220);
  analogWrite(lmt2, 0);
  analogWrite(rmt1, 220);
  analogWrite(rmt2, 0);
}
void reverse(){
  analogWrite(lmt1,0);
  analogWrite(lmt2,220);
  analogWrite(rmt1,0);
  analogWrite(rmt2, 220);
}
void stop(){
  analogWrite(lmt1,0);
  analogWrite(lmt2,0);
  analogWrite(rmt1,0);
  analogWrite(rmt2,0);
}
