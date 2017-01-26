// testshapes demo for Adafruit RGBmatrixPanel library.
// Demonstrates the drawing abilities of the RGBmatrixPanel library.
// For 32x32 RGB LED matrix:
// http://www.adafruit.com/products/607

// Written by Limor Fried/Ladyada & Phil Burgess/PaintYourDragon
// for Adafruit Industries.
// BSD license, all text above must be included in any redistribution.

// Proyecto Jo Jo Jo, ProteinLab 2016
// Implementacion Sergio Abarca 
// Asesorias, Victor Meza, Helene Schmelzer y Francisco Sanchez.

#include <Adafruit_GFX.h>   // Core graphics library
#include <RGBmatrixPanel.h> // Hardware-specific library

// If your 32x32 matrix has the SINGLE HEADER input,
// use this pinout:
#define CLK 8  // MUST be on PORTB! (Use pin 11 on Mega)
#define OE  9
#define LAT 10
#define A   A0
#define B   A1
#define C   A2
#define D   A3
// If your matrix has the DOUBLE HEADER input, use:
//#define CLK 8  // MUST be on PORTB! (Use pin 11 on Mega)
//#define LAT 9
//#define OE  10
//#define A   A3
//#define B   A2
//#define C   A1
//#define D   A0
RGBmatrixPanel matrix(A, B, C, D, CLK, LAT, OE, false);

void setup() {
  matrix.begin();
  Serial.begin(9600);
  int i=32,j=32;
  while(true){
    // draw some text!
    matrix.setTextSize(1);     // size 1 == 8 pixels high
    matrix.setTextWrap(false); // Don't wrap at end of line - will do ourselves
    
    matrix.setCursor(i,3);
    matrix.setTextColor(matrix.Color333(0,7,0));
    matrix.print('B');
    matrix.setTextColor(matrix.Color333(0,7,0));
    matrix.print('I');
    matrix.setTextColor(matrix.Color333(0,7,0));
    matrix.print('E');
    matrix.setTextColor(matrix.Color333(0,7,0));
    matrix.print('N');
    matrix.setTextColor(matrix.Color333(0,7,0));
    matrix.print('V');
    matrix.setTextColor(matrix.Color333(0,7,0));
    matrix.print('E');
    matrix.setTextColor(matrix.Color333(0,7,0));
    matrix.print('N');
    matrix.setTextColor(matrix.Color333(0,7,0));
    matrix.print('I');
    matrix.setTextColor(matrix.Color333(0,7,0));
    matrix.print('D');
    matrix.setTextColor(matrix.Color333(0,7,0));
    matrix.print('O');
    matrix.setTextColor(matrix.Color333(0,7,0));
    matrix.print('S');

    matrix.setCursor(i+25,14);
    matrix.setTextColor(matrix.Color333(0,0,7));
    matrix.print('A');
    //Palabras mayores a 7 caracteres se deben deletrar
    matrix.setCursor(i+5,24);
    matrix.setTextColor(matrix.Color333(7,7,7));
    matrix.print('P');
    matrix.setTextColor(matrix.Color333(7,7,7));
    matrix.print('r');
    matrix.setTextColor(matrix.Color333(7,7,7));
    matrix.print('o');
    matrix.setTextColor(matrix.Color333(7,0,0));
    matrix.print('t');
    matrix.setTextColor(matrix.Color333(7,0,0));
    matrix.print('e');
    matrix.setTextColor(matrix.Color333(7,7,7));
    matrix.print('i');
    matrix.setTextColor(matrix.Color333(7,7,7));
    matrix.print('n');
    matrix.setTextColor(matrix.Color333(7,7,7));
    matrix.print('L');
    matrix.setTextColor(matrix.Color333(7,7,7));
    matrix.print('a');
    matrix.setTextColor(matrix.Color333(7,7,7));
    matrix.print('b');
    i--;
    //Apagar todos los LED de la placa RGB (Limpiar pantalla)
    matrix.fillRect(0, 0, 32, 32, matrix.Color333(0, 0, 0));
    if(i==-60){
       i=32;
     }
  }
  
}
void loop() {
  
 // do nothing
}
