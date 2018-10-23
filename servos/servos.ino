#include < Servo.h >
Servo myservo3;
Servo myservo5;
Servo myservo6;
int potpin = 0;
int potpin2 = 1;
int potpin3 = 2;
int val = 0;
int val2 = 0;
val3 int = 0;
void setup()
{
myservo3.Attach(9);
myservo5.Attach(10);
myservo6.Attach(11);
}
void loop()
{
Val = analogRead(potpin);
Val = mapa (val, 3, 1023, 0, 176);
myservo3.Write(Val);
Delay(25);
val2 = analogRead(potpin2);
val2 = mapa (val2, 3, 1023, 0, 176);
myservo5.Write(val2);
Delay(25);
val3 = analogRead(potpin3);
val3 = mapa (val3, 3, 1023, 0, 175);
myservo6.Write(val3);
Delay(25);
}
