// C++ code
//

#define ledR1 1
#define ledB1 2
#define ledG1 3
#define ledR2 4
#define ledB2 5
#define ledG2 6
#define boton 8
#define pote A0
void setup()
{
  pinMode(ledR1, OUTPUT);
  pinMode(ledB1, OUTPUT);
  pinMode(ledG1, OUTPUT);
  pinMode(ledR2, OUTPUT);
  pinMode(ledB2, OUTPUT);
  pinMode(ledG2, OUTPUT);
  pinMode(boton, INPUT);
}

void loop()
{
  	int valor = digitalRead(boton);
  	digitalWrite(ledR1, LOW);
  	digitalWrite(ledB1, LOW);
  	digitalWrite(ledG1, LOW);
  	digitalWrite(ledR2, LOW);
  	digitalWrite(ledB2, LOW);
  	digitalWrite(ledG2, LOW);
  if (valor == HIGH)
  {  
    int poteVal = analogRead(pote);
    
    int ledG = map(poteVal,0,1023,0,255);
    int ledB = map(poteVal,0,1023,0,255);
    int ledR = map(poteVal,0,1023,0,255);
  	analogWrite(ledR1,200);
  	analogWrite(ledB1, 0);
    analogWrite(ledG1, 100);
  	delay(pote); 
    analogWrite(ledR1,0);
  	analogWrite(ledB1, 0);
    analogWrite(ledG1, 0);
    analogWrite(ledR1, 200);
    digitalWrite(ledB1, 200);
    digitalWrite(ledG1, 0);
    delay(pote);
    digitalWrite(ledR1, HIGH);
    digitalWrite(ledB1, LOW);
    digitalWrite(ledG1, LOW);
    delay(pote);
    digitalWrite(ledR1, HIGH);
    digitalWrite(ledB1, LOW);
    digitalWrite(ledG1, HIGH);
  }
  else
  {
     analogWrite(ledR2,200);
  	analogWrite(ledB2, 0);
    analogWrite(ledG2, 100);
  	delay(pote); 
    analogWrite(ledR2,0);
  	analogWrite(ledB2, 0);
    analogWrite(ledG2, 0);
    analogWrite(ledR2, 200);
    digitalWrite(ledB2, 200);
    digitalWrite(ledG2, 0);
    delay(pote);
    digitalWrite(ledR2, HIGH);
    digitalWrite(ledB2, LOW);
    digitalWrite(ledG2, LOW);
    delay(pote);
    digitalWrite(ledR2, HIGH);
    digitalWrite(ledB2, LOW);
    digitalWrite(ledG2, HIGH);

    
  }
}