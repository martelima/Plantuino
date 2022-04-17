//Programa: Ligando dois displays LCD I2C no Arduino
//Autor: Arduino e Cia
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
//Display LCD 1 no endereco 0x3F, 16 linhas e 2 colunas
LiquidCrystal_I2C display1(0x3F,16,2);

void setup()
{
  //Inicializa os displays
  display1.init();

  //Liga o backligh (luz de fundo)
  display1.backlight();

  //Mostra texto no display 1
  display1.setCursor(0,0);
  display1.print("Teste do display");
  display1.setCursor(2,1);
  display1.print("Materpillar ");
  
 
}
void loop()
{}
