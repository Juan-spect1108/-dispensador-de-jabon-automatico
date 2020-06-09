// Designed by: Juan Rodrigo Guzman Martinez 

// Proyecto para hacer un dispensador de jabon automatico

/*
 Conexiones del Arduino al Sensor 
  Arduino             sensor
   GND                 GND
   5v                  5v
  digital 2            S

  Conexiones del Arduino al Servomotor
  Arduino             Servo
   GND                 GND (cable color cafe)
   5v                  5v (Cable color rojo)
  digital 3            S (Cable color amarillo)
  
 */
 
#include <Servo.h> // Incluimos la libreria Servo

int SENSOR=2; // Declaramos el pin 2 con el nombre de SENSOR
int ESTADO; // Declaramos una variable llamada ESTADO donde se almacenaran los datos
int TIEMPO= 1000; // Declaramos una variable donde se almacenara el tiempo de retardo

Servo servo; // Declaramos el servo con un nombre (se puede personalizar)

void setup() {
  
pinMode(SENSOR, INPUT); // Declaramos el SENSOR como una entrada 
servo.attach(3); // Declaramos que el servo sera conectado en el pin 3

}

void loop() {
  
ESTADO=digitalRead(SENSOR); // Realizamos la lectura digital del SENSOR por la variable ESTADO

if(ESTADO==0){ // Si mi variable ESTADO es 0 entonces coloque el servo a 90 grados
servo.write(90); // Colocamos el servo en posicion de 90 grados
delay(TIEMPO); // Esperamos un tiempo de retardo que esta almacenada en la variable TIEMPO
servo.write(0); // Colocamos el servo en posicion de 0 grados
}

else{ // sino se cumple la condicion coloque el servo a 0 grados
servo.write(0); // Colocamos el servo en posicion de 0 grados
}

}
