#include <Servo.h>
Servo servo, servo1, servo2;
int trigpin = 4;
int echopin = 5;

//---------------------------------------------
const int trigPin2 = 12;
const int echoPin2 = 11;
// Number of samples for median filtering
//const int samples = 5;
///--------------------------------------------

const int LED1 = A0;
//const int LED2 = A1;
const int LED3 = A2;
//const int LED4 = A3;
//const int LED5 = A4;

int distance, distance2;
float duration, duration2;
float cm, cm1;

int sound = 250;

void setup()
{
  Serial.begin(9600);
  servo.attach(8);
  servo1.attach(9);
  servo2.attach(7);

  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);

  //-------------------platfrom ------------------------------------
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
  //--------------------------------------

  pinMode(LED1, OUTPUT);
  //pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  //pinMode(LED4, OUTPUT);
  //pinMode(LED5, OUTPUT);

}

void loop()
{

  digitalWrite(trigPin2, LOW);
  delay(2);
  digitalWrite(trigPin2, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  cm1 = (duration2 / 58.82);
  distance2 = cm1;
  
  Serial.print("From Platform ");
  Serial.println(distance2);
  
  digitalWrite(trigpin, LOW);
  delay(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  duration = pulseIn(echopin, HIGH);
  cm = (duration / 58.82);
  distance = cm;
  
  Serial.print("From Crossing: ");
  Serial.println(distance);

  if (distance2 < 3 && distance2 >0) {
    servo1.write(90);
    digitalWrite(LED1, HIGH);
    tone(LED1, 5000);
    delay(400);
  }
  else {
    servo1.write(0);
    digitalWrite(LED1, LOW);
    noTone(LED1);
    //delay(50);
  }

  if (distance <= 3 && distance>0) {
    servo.write(90);
    servo2.write(90);

    digitalWrite(LED3, HIGH);
    tone(LED3, 5000);

    delay(2400);
  }
  else {
    servo.write(0);
    servo2.write(0);

    digitalWrite(LED3, LOW);
    noTone(LED3);

    delay(50);
  }

}
