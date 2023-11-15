#include <Servo.h>

const int sensorPIREntradaPin = 2;
const int sensorPIRSalidaPin = 3;
const int ldrPin = 4;
const int ledPin = 13;


Servo servoPuerta1;
Servo servoPuerta2;

void setup() {
  pinMode(sensorPIREntradaPin, INPUT);
  pinMode(sensorPIRSalidaPin, INPUT);
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);

  servoPuerta1.attach(5); 
  servoPuerta2.attach(6); 
}

void loop() {
  if (detectarMovimiento(sensorPIREntradaPin)) {
    abrirPuertas();
    while (detectarMovimiento(sensorPIREntradaPin)) {
      delay(100);
    }
    cerrarPuertas();
  }

  if (esDeNoche()) {
    encenderLuz();
  } else {
    apagarLuz();
  }

  delay(100);
}

bool detectarMovimiento(int pin) {
  return digitalRead(pin) == HIGH;
}

bool esDeNoche() {
  return digitalRead(ldrPin) == HIGH;
}

void encenderLuz() {
  digitalWrite(ledPin, HIGH);
}

void apagarLuz() {
  digitalWrite(ledPin, LOW);
}

void abrirPuertas() {
  servoPuerta1.write(90);
  servoPuerta2.write(90);
  delay(1000);  
}

void cerrarPuertas() {
  servoPuerta1.write(0);
  servoPuerta2.write(0);
  delay(1000); 
}
