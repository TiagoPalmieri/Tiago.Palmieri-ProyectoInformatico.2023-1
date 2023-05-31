// C++ code
//
#define led1 3
#define led2 4
#define led3 2
#define led4 8
#define led5 9
void setup(){
  pinMode( led1, OUTPUT );
  pinMode( led2, OUTPUT );
  pinMode( led3, OUTPUT );
  pinMode( led4, OUTPUT );
  pinMode( led5, OUTPUT ); 
}

void loop()
{
  digitalWrite(led1, HIGH);
  digitalWrite(led4, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led1, LOW);
  digitalWrite(led4, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  
  
  digitalWrite(led2, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led2, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led3, HIGH);
  digitalWrite(led5, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(led3, LOW);
  digitalWrite(led5, LOW);
  delay(1000); // Wait for 1000 millisecond(s)


}