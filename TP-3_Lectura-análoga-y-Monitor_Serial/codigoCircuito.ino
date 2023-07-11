#define pote1 A0
#define pote2 A1
#define pote3 A2
#define boton 4
#define red1 1
#define greeng 2
#define blueb 3
  
void setup() 
{
  pinMode(pote1, INPUT);
  pinMode(pote2, INPUT);
  pinMode(pote3, INPUT);
  pinMode(boton, INPUT);
  pinMode(red1, OUTPUT);
  pinMode(greeng, OUTPUT);
  pinMode(blueb, OUTPUT);
}

void loop() 
{
  if (digitalRead(boton) == LOW)
  {
    delay(10000);
    int poteVal1 = analogRead(pote1);
    int poteVal2 = analogRead(pote2);
    int poteVal3 = analogRead(pote3);
    
    int red = map(poteVal1,0,1023,0,255);
    int green = map(poteVal2,0,1023,0,255);
    int blue = map(poteVal3,0,1023,0,255);
    

    analogWrite(red1, red);
    analogWrite(greeng, green);
    analogWrite(blueb, blue);
  }
}
