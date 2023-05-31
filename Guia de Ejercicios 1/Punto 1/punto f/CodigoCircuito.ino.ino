// C++ code
//
#define buzzer 1
#define boton 2
void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(boton, INPUT_PULLUP);  
}

void loop()
{

  	int valor = digitalRead(boton);
  if ( valor != HIGH)
  {
    digitalWrite(buzzer, HIGH);
    delay(200); 
    digitalWrite(buzzer, LOW);
    delay(200);
  }
}