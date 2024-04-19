int lmt1 =3;
int lmt2=5;
int rmt1=6;
int rmt2=11;
void setup() {
  // put your setup code here, to run once:
pinMode(lmt1, OUTPUT);
pinMode(lmt2, OUTPUT);
pinMode(rmt1, OUTPUT);
pinMode(rmt2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
forward();
}
void forward(){
  analogWrite(lmt1, 220);
  analogWrite(lmt2, 0);
  analogWrite(rmt1, 220);
  analogWrite(rmt2, 0);















































































  
}
