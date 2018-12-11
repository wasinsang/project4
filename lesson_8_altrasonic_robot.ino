#include <Ultrasonic.h>

Ultrasonic ultrasonic(4, 5); // 4 tric 5 echo

int Motor_R1 = 13;
int Motor_R2 = 12;
int Motor_L1 = 10;
int Motor_L2 = 9;
int pwmr = 11;
int pwml = 8;
int ssR = 7;
int ssL = 6;
int swl = 5;
int swr = 4;

int distance;

void setup() {
  pinMode (Motor_R1, OUTPUT);
  pinMode (Motor_R2, OUTPUT);
  pinMode (Motor_L1, OUTPUT);
  pinMode (Motor_L2, OUTPUT);
  pinMode (pwmr, OUTPUT);
  pinMode (pwml, OUTPUT);
  pinMode (ssR, INPUT);
  pinMode (ssL, INPUT);
  pinMode (swl, INPUT);
  pinMode (swr, INPUT);
  Serial.begin (9600);
}

void loop() {
  distance = ultrasonic.read();
  int r = digitalRead (ssR);
  int l = digitalRead (ssL);
  int swR = digitalRead (swr);
  int swL = digitalRead (swl);


  if (distance <= 7)
  {
    delay(1000)
    if (distacne <= 7 )
    {
      Move_r();
      delay(500);
    }
  }
  else
  {
    delay(500);
    Move_f();
  }
}


void right_foword();
{
  digitalWrite (Motor_R1, 1);
  digitalWrite (Motor_R2, 0);
  analogWrite (pwmr, 150);
}
void left_foword();
{
  digitalWrite (Motor_L1, 1);
  digitalWrite (Motor_L2, 0);
  analogWrite (pwml, 1500);
}
void right_slow();
{
  digitalWrite (Motor_R1, 1);
  digitalWrite (Motor_R2, 0);
  analogWrite (pwmr, 50);
}
void left_slow();
{
  digitalWrite (Motor_L1, 1);
  digitalWrite (Motor_L2, 0);
  analogWrite (pwml, 50);
}
void Move_r()
{
  digitalWrite (Motor_R1, 1);
  digitalWrite (Motor_R2, 0);
  analogWrite  (pwmr, 50);
  digitalWrite (Motor_L1, 0);
  digitalWrite (Motor_L2, 1);
  analogWrite  (pwml, 50);
  delay(3000);
}
void Move_f()
{
  digitalWrite (Motor_R1, 1);
  digitalWrite (Motor_R2, 0);
  analogWrite  (pwmr, 50);
  digitalWrite (Motor_L1, 1);
  digitalWrite (Motor_L2, 0);
  analogWrite  (pwml, 50);
}
