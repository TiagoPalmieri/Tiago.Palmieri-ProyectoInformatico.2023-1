int ledPin = 13; // Pin para el LED
int rgbLedRedPin = 9; // Pin para el LED rojo del RGB
int rgbLedGreenPin = 10; // Pin para el LED verde del RGB
int rgbLedBluePin = 11; // Pin para el LED azul del RGB
int buttonPin = 1; // Pin para el botón
int buzzerPin = 2; // Pin para el buzzer
int ledPins[] = {3, 4, 5, 6, 7}; // Pines para los 5 LEDs

int array1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int array2[] = {10, 4, 2};
float array3[] = {5.4, 5.39, 5.38, 5.31, 5.21, 5.03, 4.45, 3.95, 2.6, 1.49};
int array4[] = {1, 0, 0, 1, 1, 0, 1, 1};
int array5a[] = {1, 0, 0, 1, 1, 0, 1, 1};
int array5b[] = {0, 1, 0, 1, 0, 0, 1, 0};
int array6[] = {2, 6, 10, 11};
int buttonData[5];
int colores[][3] = {
  {122, 234, 21}, // L1
  {33, 53, 155},  // L2
  {200, 255, 12}  // L3
};

void setup() {
  for (int i = 0; i < 5; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(rgbLedRedPin, OUTPUT);
  pinMode(rgbLedGreenPin, OUTPUT);
  pinMode(rgbLedBluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // 1. Calcular la media del array1
  int array1[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    sum += array1[i];
  }
  float media = sum / 10.0;
  Serial.print("Media del array1: ");
  Serial.println(media);

  // 2. Ordenar array2 de menor a mayor
  int array2[] = {10, 4, 2};
  int n = sizeof(array2) / sizeof(array2[0]);
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (array2[j] > array2[j + 1]) {
        int temp = array2[j];
        array2[j] = array2[j + 1];
        array2[j + 1] = temp;
      }
    }
  }
  Serial.print("Array2 ordenado de menor a mayor: ");
  for (int i = 0; i < n; i++) {
    Serial.print(array2[i]);
    Serial.print(" ");
  }
  Serial.println();

  // 3. Encontrar el número más grande en array3
  float array3[] = {5.4, 5.39, 5.38, 5.31, 5.21, 5.03, 4.45, 3.95, 2.6, 1.49};
  float maxNum = array3[0];
  for (int i = 1; i < 10; i++) {
    if (array3[i] > maxNum) {
      maxNum = array3[i];
    }
  }
  Serial.print("Número más grande en array3: ");
  Serial.println(maxNum, 2);

  // 4. Prender un LED en una secuencia predefinida por array4
  int array4[] = {1, 0, 0, 1, 1, 0, 1, 1};
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i % 5], array4[i]);
    delay(500);
  }

  // 5. Realizar el mismo procedimiento para dos LEDs diferentes (LED rojo y verde) con secuencias array5a y array5b
  int array5a[] = {1, 0, 0, 1, 1, 0, 1, 1};
  int array5b[] = {0, 1, 0, 1, 0, 0, 1, 0};
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i % 5], array5a[i]);
    digitalWrite(ledPins[(i + 1) % 5], array5b[i]);
    delay(500);
  }

  // 6. Mostrar por la consola los primeros 5 múltiplos de los datos en array6
  int array6[] = {2, 6, 10, 11};
  Serial.print("Los primeros 5 múltiplos de los datos en array6: ");
  for (int i = 0; i < 5; i++) {
    Serial.print(array6[i] * 5);
    Serial.print(" ");
  }
  Serial.println();

  // 7. Realizar una escalera de luces con 5 LEDs basada en un vector y un ciclo
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      digitalWrite(ledPins[j], HIGH);
      delay(200);
      digitalWrite(ledPins[j], LOW);
    }
  }
  // 8. Guardar una secuencia de encendido y apagado del LED con el botón
  for (int i = 0; i < 5; i++) {
    Serial.println("Presiona el botón para encender el LED...");
    while (digitalRead(buttonPin) == HIGH) {}
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
    buttonData[i] = digitalRead(buttonPin);
  }
  Serial.print("Datos del botón: ");
  for (int i = 0; i < 5; i++) {
    Serial.print(buttonData[i]);
    Serial.print(" ");
  }
  Serial.println();

  // 9. Mostrar la configuración de colores almacenados en el vector colorData con un LED RGB
  for (int i = 0; i < 3; i++) { // Iterar a través de los vectores de colores
    int redValue = colores[i][0];
    int greenValue = colores[i][1];
    int blueValue = colores[i][2];
    
    // Configurar la intensidad de cada color en el LED RGB
    analogWrite(rgbLedRedPin, redValue);
    analogWrite(rgbLedGreenPin, greenValue);
    analogWrite(rgbLedBluePin, blueValue);

    delay(2000); // Mostrar el color actual durante 2 segundos

    // Apagar el LED RGB
    analogWrite(rgbLedRedPin, 0);
    analogWrite(rgbLedGreenPin, 0);
    analogWrite(rgbLedBluePin, 0);

    delay(1000); // Espera 1 segundo entre colores

  // 10. Generar y mostrar 10 números aleatorios, haciendo sonar el buzzer si se encuentra un 5
  Serial.print("Números aleatorios: ");
  for (int i = 0; i < 10; i++) {
    int randomNumber = random(1, 11);
    Serial.print(randomNumber);
    Serial.print(" ");
    if (randomNumber == 5) {
      tone(buzzerPin, 1000, 1000);
    }
    delay(500);
  }
  Serial.println();
  noTone(buzzerPin);

  delay(2000);
}
  }

