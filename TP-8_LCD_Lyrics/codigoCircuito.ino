#include <LiquidCrystal.h>

#define E5  659
#define A4  440
#define Csharp4  277 //C#
#define A3  220
#define Csharp5  554 //C#
#define G3  196
#define Fsharp4  370 //F#
#define D5  587
#define Csharp5_2  554 //C#
#define A4_2  440
#define B3  247
#define Gsharp4  392 //G#
#define E4  330
#define B4 494
#define Fsharp4_2  370 //F#
#define A4_3  440

#define buzzer 8

LiquidCrystal lcd(7, 6, 2, 3, 4, 5);


char musica[][3] = {"E5", "A4", "C#", "A3", "C#", "G3", "F#", "D5", "C#", "A4", "B3", "G#", "E4", "B4", "A4"};
int notas[] = 	   {E5, A4, Csharp4, A3, Csharp5, G3, Fsharp4, D5, Csharp5_2, A4_2, B3, Gsharp4, E4, B4, A4_3};
float figuras[] =  { 4, 1 ,    1   , 1 ,    1   , 1 ,    2   , 4 ,     4    , 0.5 , 1 ,    1   , 1 , 2 ,   1 };

void setup()
{
  lcd.begin(16, 2);
}

void loop()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Sweden Minecraft");
  lcd.setCursor(0,1);
  lcd.print("UwU");
  lcd.setCursor(13,1);
  lcd.print("UwU");
  float t = 1.20;

  for (int i = 0; i < 15; i++)
  {
    lcd.setCursor(7, 1);
    lcd.print(musica[i]);
    tone(buzzer, notas[i]);
    float tempo = (1000 / figuras[i] * t);
    delay(tempo);
    noTone(buzzer);
  }
}
