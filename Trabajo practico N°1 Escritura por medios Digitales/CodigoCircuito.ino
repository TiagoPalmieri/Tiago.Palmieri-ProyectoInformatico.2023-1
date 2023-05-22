#define led1R 3
#define led1B 2
#define led1G 1
#define led2R 5
#define led2B 6
#define led2G 7
#define led3R 8
#define led3B 9
#define led3G 10
void setup()
{
  pinMode(led1R , OUTPUT);
  pinMode(led1B , OUTPUT);
  pinMode(led1G , OUTPUT);
  pinMode(led2R , OUTPUT);
  pinMode(led2B , OUTPUT);
  pinMode(led2G , OUTPUT);
  pinMode(led3R , OUTPUT);
  pinMode(led3B , OUTPUT);
  pinMode(led3G , OUTPUT);
}

void loop()
{
  analogWrite(led1R, 255);
  delay(1000);
  analogWrite(led1R, 0);
  digitalWrite( led2R , HIGH );
  digitalWrite(led2G, LOW);
  digitalWrite( led2B , HIGH );
  delay(1000);
  digitalWrite(led2R , LOW);
  digitalWrite(led2B, LOW);
  digitalWrite(led2G, LOW);
  analogWrite(led3R, 0);
  analogWrite(led3B, 255);
  analogWrite(led3G, 255);
  delay(1000);
  analogWrite(led3R, 0);
  analogWrite(led3B, 0);
  analogWrite(led3G, 0);

}