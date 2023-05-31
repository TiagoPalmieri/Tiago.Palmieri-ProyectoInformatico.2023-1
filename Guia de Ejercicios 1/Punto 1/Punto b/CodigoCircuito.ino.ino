// C++ code
//
#define led1 0
#define led2 1
#define led3 2
#define led4 3
#define led5 4
#define led6 8
#define led7 9
#define led8 10
#define led9 11
#define led10 12

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  
  
}

void loop()
{
  digitalWrite(led10, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led10, LOW);
  digitalWrite(led9,HIGH);
  delay(1000);
  digitalWrite(led9,LOW);
  digitalWrite(led8,HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led8,LOW);
  digitalWrite(led7,HIGH);
  delay(1000);
  digitalWrite(led7,LOW);
  digitalWrite(led6,HIGH);
  delay(1000);
  digitalWrite(led6,LOW);  
  digitalWrite(led5,HIGH);
  delay(1000);
  digitalWrite(led5,LOW);
  digitalWrite(led4,HIGH);
  delay(1000);
  digitalWrite(led4,LOW);
  digitalWrite(led3,HIGH);
  delay(1000);
  digitalWrite(led3,LOW);
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led2,LOW);
  digitalWrite(led1,HIGH);
  delay(1000);
  digitalWrite(led1,LOW);

}