#define led1 2
#define led2 5
#define boton 7
#define led3 5
#define led4 8

void setup()
{
  Serial.begin(9600);
  // 1 --> output   0 --> input
  int pines[] = {led1, led2, boton, led3, led4};
  int senal[] = { 1  ,  1  ,  0   ,  1  ,   1 };
  //   (sizeof( senal )/sizeof( int ))
  for ( int i = 0 ; i < (sizeof(pines)/sizeof(int)) ; i++)
  {                 
    pinMode( pines[i], senal[i]);
  }
 
  // dami++  dami = dami +   dami +=1
  // 	  (variable)
  for( int dami = 0 ; (dami < (sizeof(pines)/sizeof(int)) ); dami++ )
  {
    Serial.println(pines[dami]);
  }
  
}
void loop()
{
}