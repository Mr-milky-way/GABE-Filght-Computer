/* 
This is just a demo of the servos, LED, Pyros, and Buzzer.
*/

#include <PWMServo.h>

PWMServo servo1;
PWMServo servo2;
PWMServo servo3;
PWMServo servo4;
PWMServo servo5;
PWMServo servo6;
PWMServo servo7;
PWMServo servo8;


int pos = 0;
int PYRO1 = 36;
int PYRO2 = 37;
int PYRO3 = 38;
int PYRO4 = 39;
int PYRO5 = 40;
int PYRO6 = 41;
int R_LED = 30;
int B_LED = 32;
int G_LED = 31;
int buzzer = 33;

void setup() {
  Serial.begin(115200);
  Serial.write("Start up");
  pinMode(R_LED, OUTPUT);
  pinMode(B_LED, OUTPUT);
  pinMode(G_LED, OUTPUT);

  pinMode(PYRO1, OUTPUT);
  pinMode(PYRO2, OUTPUT);
  pinMode(PYRO3, OUTPUT);
  pinMode(PYRO4, OUTPUT);
  pinMode(PYRO5, OUTPUT);
  pinMode(PYRO6, OUTPUT);
  


  servo1.attach(2);
  servo2.attach(3);
  servo3.attach(4);
  servo4.attach(5);
  servo5.attach(6);
  servo6.attach(9);
  servo7.attach(22);
  servo8.attach(23);
}

void loop() {

  Serial.write("LEDs");
  digitalWrite(R_LED, LOW);
  digitalWrite(B_LED, LOW);
  digitalWrite(G_LED, LOW);
  delay(50);
  digitalWrite(R_LED, HIGH);
  digitalWrite(B_LED, LOW);
  digitalWrite(G_LED, LOW);
  delay(50);
  digitalWrite(R_LED, LOW);
  digitalWrite(B_LED, HIGH);
  digitalWrite(G_LED, LOW);
  delay(50);
  digitalWrite(R_LED, LOW);
  digitalWrite(B_LED, LOW);
  digitalWrite(G_LED, HIGH);
  delay(50);
  digitalWrite(R_LED, LOW);
  digitalWrite(B_LED, LOW);
  digitalWrite(G_LED, LOW);
  delay(50);
  digitalWrite(R_LED, HIGH);
  digitalWrite(B_LED, HIGH);
  digitalWrite(G_LED, HIGH);

  Serial.write("Servo and buzzer");
  for(pos = 0; pos < 180; pos += 1) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    servo5.write(pos);
    servo6.write(pos);
    servo7.write(pos);
    servo8.write(pos);
    tone(buzzer, 1000);
    delay(50);
    noTone(buzzer);
  }
  for(pos = 180; pos>=1; pos-=5) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    servo5.write(pos);
    servo6.write(pos);
    servo7.write(pos);
    servo8.write(pos);
    tone(buzzer, 1000);
    delay(50);
    noTone(buzzer);
  }
  for(pos = 0; pos < 180; pos += 10) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    servo5.write(pos);
    servo6.write(pos);
    servo7.write(pos);
    servo8.write(pos);
    tone(buzzer, 1000);
    delay(50);
    noTone(buzzer);
  }
  for(pos = 180; pos>=1; pos-=15) {
    servo1.write(pos);
    servo2.write(pos);
    servo3.write(pos);
    servo4.write(pos);
    servo5.write(pos);
    servo6.write(pos);
    servo7.write(pos);
    servo8.write(pos);
    tone(buzzer, 1000);
    delay(50);
    noTone(buzzer);
  }

  Serial.write("Pyros");
  digitalWrite(PYRO1, LOW);
  digitalWrite(PYRO2, LOW);
  digitalWrite(PYRO3, LOW);
  digitalWrite(PYRO4, LOW);
  digitalWrite(PYRO5, LOW);
  digitalWrite(PYRO6, LOW);
  delay(1000);
  Serial.write("Pyro 1 ON");
  digitalWrite(PYRO1, HIGH);
  delay(1000);
  Serial.write("Pyro 1 OFF");
  Serial.write("Pyro 2 ON");
  digitalWrite(PYRO1, LOW);
  digitalWrite(PYRO2, HIGH);
  delay(1000);
  Serial.write("Pyro 2 OFF");
  Serial.write("Pyro 3 ON");
  digitalWrite(PYRO2, LOW);
  digitalWrite(PYRO3, HIGH);
  delay(1000);
  Serial.write("Pyro 3 OFF");
  Serial.write("Pyro 4 ON");
  digitalWrite(PYRO3, LOW);
  digitalWrite(PYRO4, HIGH);
  delay(1000);
  Serial.write("Pyro 4 OFF");
  Serial.write("Pyro 5 ON");
  digitalWrite(PYRO4, LOW);
  digitalWrite(PYRO5, HIGH);
  delay(1000);
  Serial.write("Pyro 5 OFF");
  Serial.write("Pyro 6 ON");
  digitalWrite(PYRO5, LOW);
  digitalWrite(PYRO6, HIGH);
  delay(1000);
  Serial.write("Pyro 6 OFF");
  digitalWrite(PYRO6, LOW);
}
