#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8
#define a2 9
#define b2 10
#define c2 11
#define d2 12
#define e2 13
#define f2 A0
#define g2 A1
#define bot A3
#define buzz 1
 int pines[] =  { a , b , c , d , e , f , g, a2,  b2,  c2,  d2,  e2,  f2,  g2, bot};
  int senal[] = { 1 , 1 , 1 , 1 , 1 , 1 , 1,  1 , 1 ,  1 ,  1 ,  1 ,  1 ,  1,    0};
  int numeros0[] = {1,1,1,1,1,1,1}; 
  int numeros1[] = {0,1,1,0,0,0,0};
  int numeros2[] = {1,1,0,1,1,1,0};
  int numeros3[] = {1,1,1,1,0,1,0};
  int numeros4[] = {0,1,1,0,0,1,1};
  int numeros5[] = {1,0,1,1,0,1,1};
  int numeros6[] = {1,0,1,1,1,1,1};
  int numerosa[] = {1,1,0,0,0,0,0};
  int numerosb[] = {0,0,0,0,1,0,1};
  int numerosc[] = {0,1,1,0,0,0,0};//1
  int numerosd[] = {1,1,0,1,1,1,0};//2
  int numerose[] = {1,1,1,1,0,1,0};//3
  int numerosf[] = {0,1,1,0,0,1,1};//4
  int numerosg[] = {1,0,1,1,0,1,1};//5
  int numerosh[] = {1,0,1,1,1,1,1};//6

int* numerosA[] = {numeros0, numeros1, numeros2, numeros3, numeros4, numeros5, numeros6};
int* numerosB[] = {numerosa, numerosb, numerosc, numerosd, numerose, numerosf, numerosg,  numerosh};
int alea1;
int alea2;
int dado1;
int dado2;
int estado;
void setup()
{
 pinMode(buzz, OUTPUT);
 Serial.begin(9600);
  randomSeed(analogRead(A5));
  pinMode( buzz, OUTPUT);
}

void loop()
{
 
estado = analogRead(bot);
 digitalWrite(buzz, LOW);
  delay(2);
  if(estado == 1023){
    dado1 = random(1, 7);
    dado2 = random(1, 7);
    for (int i = 0; i < 5; i++ ){
        alea1 = random(1, 7);
  		alea2 = random(1, 7);
      	Serial.print("alea1 =");
  		Serial.println(alea1);
      	Serial.print("alea2 =");
 		Serial.println(alea2);
      	
      for( int sufa = 0 ; sufa < 7 ; sufa++ )
  		{
    	digitalWrite(pines[sufa], numerosA[alea1][sufa]);
  		}
  	  for( int sufa = 7 ; sufa < 14 ; sufa++ )
  		{
    	digitalWrite(pines[sufa], numerosB[alea2][sufa]);
  		}
	delay(1000); 
    }
    Serial.print("dado1 =");
  	Serial.println(dado1);
    Serial.print("dado2 =");
 	Serial.println(dado2);
    for( int sufa = 0 ; sufa < 7 ; sufa++ )
  		{
    	digitalWrite(pines[sufa], numerosA[dado1][sufa]);
  		}
  	for( int sufa = 7 ; sufa < 14 ; sufa++ )
  		{
    	digitalWrite(pines[sufa], numerosB[dado1][sufa]);
  		}
    if(dado1 + dado2 <= 7){
      digitalWrite(buzz, HIGH);
  	  delay(2000);

    }
  }
  	
}