int ssr = 12;
int ssl = 13;
int M1_R = 11;
int M2_R = 10;
int pwm_R = 9;
int M1_L = 8;
int M2_L = 7;
int pwm_L = 6;
void setup() {
  pinMode (ssr, INPUT);
  pinMode (ssl, INPUT);
  pinMode (M1_R, OUTPUT);
  pinMode (M2_R, OUTPUT);
  pinMode (M1_L, OUTPUT);
  pinMode (M2_L, OUTPUT);
  pinMode (pwm_R, OUTPUT);
  pinMode (pwm_L, OUTPUT);
}

void loop() {
  int sr = 0;
  int sl = 0;
  sr = digitalRead (ssr);
  sl = digitalRead (ssl);
  if (sr == 0)
  {
    digitalWrite (M1_R, 1);
    digitalWrite (M2_R, 0);
    analogWrite (pwm_R, 255);
  }
  if (sl == 0)
  {
    digitalWrite (M1_L, 1);
    digitalWrite (M2_L, 0);
    analogWrite (pwm_L, 255);
  }
  if (sl == 1)
  {
    digitalWrite (M1_L, 1);
    digitalWrite (M2_L, 0);
    analogWrite (pwm_L, 55);
  }
  if (sr == 1)
  {
    digitalWrite (M1_R, 1);
    digitalWrite (M2_R, 0);
    analogWrite (pwm_R, 55);
  }
}
