#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
               //    A B C D E F G
int numeroCERO[]  = {1,1,1,1,1,1,0};
int numeroUNO[]   = {0,1,1,0,0,0,0};
int numeroDOS[]   = {1,1,0,1,1,0,1};
int numeroTRES[]  = {1,1,1,1,0,0,1};
int numeroCUATRO[]= {0,1,1,0,0,1,1};
int numeroCINCO[] = {1,0,1,1,0,1,1};
int numeroSEIS[]  = {1,0,1,1,1,1,1};
int numeroSIETE[] = {1,1,1,0,0,0,0};
int numeroOCHO[]  = {1,1,1,1,1,1,1};
int numeroNUEVE[] = {1,1,1,0,0,1,1};
int letraA[]	  = {1,1,1,0,1,1,1};
int letraC[]	  = {1,0,0,1,1,1,0};
int letraE[]	  = {1,0,0,1,1,1,1};
int letraF[]	  = {1,0,0,0,1,1,1};
 

// 1 --> output   0 --> input
int pines[] = {A, B, C, D, E, F, G, 10, 11, 12, 13 };
int senal[] = {1, 1, 1, 1, 1, 1, 1, 0,   0,  0,  0 };
int binario[4];
int peso[] = {8, 4, 2, 1};

// 16 8  4  2  1  <-- peso
// 0  1  0  0  1  <-- bin
int* numeros[] = {0,numeroUNO,numeroDOS,numeroTRES,numeroCUATRO,numeroCINCO,numeroSEIS,numeroSIETE,numeroOCHO,numeroNUEVE,letraA,letraC,letraE,letraF};

void setup()
{
  Serial.begin(9600);
  randomSeed(analogRead(A0) );
  //   (sizeof( senal )/sizeof( int ))
  for ( int i = 0 ; i < (sizeof(pines)/sizeof(int)) ; i++)
  {                 
    pinMode( pines[i], senal[i]);
  }
 
  // dami++  dami = dami +   dami +=1
  // 	  (variable)
  /*for( int dami = 0 ; (dami < (sizeof(pines)/sizeof(int)); dami++ )
  {
    Serial.println(pines[dami]);
  }
  ////////////////////*/
  

  
  /*
  int* numeros[]= { numeroDOS, numeroSIETE, numeroNUEVE };
  
  //
  for( int palmi=0 ; palmi < 3 ; palmi++)
  {  
      for(int sufa=0 ; sufa < 7 ; sufa++)
      {
        digitalWrite(pines[sufa], numeros[palmi][sufa]);
      }//for sufa
      delay(1000);
  }//for palmi
  */
  
}
void loop()
{
  int aleatorio = random(0,101);
  Serial.println( aleatorio ); 
  binario[0] = digitalRead(10);
  binario[1] = digitalRead(11);
  binario[2] = digitalRead(12);
  binario[3] = digitalRead(13);
  
  Serial.print( binario[0] );
  Serial.print( binario[1] );
  Serial.print( binario[2] );
  Serial.print( binario[3] );
  
  // [ 8 , 4 , 2 , 1] <--peso[]
  //   0   1   1   0  <-- binario[]
  
int dec=0;
  	for(int i=0 ; i <= 3 ; i++)
    {
      	dec += peso[i] * binario[i]; 
    }
  
  	//int dec = (8 * binario[0])+
    //          (4 * binario[1])+
    //          (2 * binario[2])+
    //          (1 * binario[3]);
  	Serial.print("=");
  	Serial.println( dec );
  
  for( int palmi=0 ; palmi < 3 ; palmi++)
  {  
    for(int sufa=0 ; sufa < 7 ; sufa++)
    {
      digitalWrite(pines[sufa], numeros[dec][sufa]);
    }//for sufa
    delay(10);
  }//for palmi
  
}
