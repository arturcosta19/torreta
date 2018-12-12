#include <Servo.h>
#include <HCSR04.h>
UltraSonicDistanceSensor Torre (13,12);
Servo Servo1;
float valor[10];
int angulo=-180;
int LED1 = 9;
int gambiarra = 0;
void setup (){
  Serial.begin(9600);
  Servo1.attach(3);
  pinMode(9,OUTPUT);
  digitalWrite(9,LOW);
  }

void loop (){
Watch();
}

int Watch (){
  int i=0;
  float dist=100;
  for (i=angulo;i<180;i++){
    Servo1.write(abs(i));
    delay(5);
    if (i%2==0){
    dist = Torre.measureDistanceCm();
    }
if (gambiarra==1){
      Serial.print(abs(angulo));
      Serial.print('/');
      Serial.print(dist);
      Serial.print('z');
}
    if (dist<30.0){
      while (Torre.measureDistanceCm()<30) {
      digitalWrite(9,HIGH);
      dist = Torre.measureDistanceCm(); 
      }
      delay(100);
      angulo=i;
      digitalWrite(9, LOW);
         gambiarra=1;
      return 1;
      }
    }
    angulo = -180;
    return 0;
}


