int ldr = 12;
int led = 13;
void setup() {
pinMode (ldr,INPUT);
pinMode (led,OUTPUT);
}

void loop() {
int i = 0;
i = digitalRead (ldr);
digitalWrite (led , i);
}
