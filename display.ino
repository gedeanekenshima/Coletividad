#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Inicializa o display no endereco 0x27
LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);
 
void setup()
{
 lcd.begin (16,2); // define tipo do dispaly
}
 
void loop()
{
  lcd.setBacklight(HIGH); // liga backlight
  lcd.setCursor(0,0); // posiciona cursor na linha de cima
  lcd.print("Coletividad"); // escreve 
  lcd.setCursor(0,1); //posiciona cursor na linha de baixo
  lcd.print("Arduino <3"); // escreve
  delay(1000); // aguarda 1s
  lcd.setBacklight(LOW); // desliga backlight
  delay(1000); // aguarda 1s
}

