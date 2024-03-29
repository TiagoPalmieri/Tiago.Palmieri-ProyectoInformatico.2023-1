#include<Servo.h>

#define PIR1 2
#define PIR2 3
#define led 4

#define fotoresistor A0

Servo izq;
Servo der;

void setup()
{
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(PIR1, INPUT);
  pinMode(PIR2, INPUT);
  pinMode(fotoresistor, INPUT);
 
  izq.attach(9);
  der.attach(10);
 
  izq.write(0);
  der.write(0);
 
}

void loop()
{
  lectura();
  ambiente();
}

void lectura()
{
  int count = 0;
  int afuera = digitalRead(PIR1);
  int adentro = digitalRead(PIR2);
  Serial.print("Afuera: ");
  Serial.println(afuera);
  delay(2);
 
  if(afuera == 1 || adentro == 1)
  {
    izq.write(90);
  der.write(90);
    delay(3000);
  }
 
  else
  {
   izq.write(180);
   der.write(0);
  }
 
}


void ambiente()
{
  int estado;
  int ldr = analogRead(fotoresistor);
 
  if(ldr < 100)
  {
   estado = 0;
  }
  else
  {
   estado = 1;
  }
 
  if (estado == 0)
  {
   digitalWrite(led, HIGH);
  }
  else
  {
   digitalWrite(led, LOW);
  }
}
