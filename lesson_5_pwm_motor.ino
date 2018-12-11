int M1 = 10;
int M2 = 11;
int pwm = 12;
void setup() {

pinMode (M1,OUTPUT);
pinMode (M2,OUTPUT);
pinMode (pwm,OUTPUT);

}

void loop() {
  digitalWrite(M1,1);
  digitalWrite(M2,0);
  analogWrite(pwm,155);
}
