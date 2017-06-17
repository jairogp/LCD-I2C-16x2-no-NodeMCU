//Tony Emerson Marim em 15/06/2017.
/** mecatronizando@gmail.com **/
/** Display LCD **/

#include <Wire.h>  //INCLUSÃO DE BIBLIOTECA
#include <LiquidCrystal_I2C.h> //INCLUSÃO DE BIBLIOTECA

LiquidCrystal_I2C lcd(0x3F, 16, 2); //FUNÇÃO DO TIPO "LiquidCrystal_I2C"
 
void setup()
{
  lcd.init();   // INICIALIZA O DISPLAY LCD
  lcd.backlight(); // HABILITA O BACKLIGHT (LUZ DE FUNDO) 
}

void loop()
{
 lcd.clear();
 lcd.setCursor(2, 0);
 lcd.print("Mecatronizando"); // EXIBE O TEXTO DA PRIMEIRA LINHA
 lcd.setCursor(0, 1);
 lcd.print("ESP8266 nodeMCU"); // EXIBE TEXTO DA SEGUNDA LINHA
 delay(5000);//TEMPO EM QUE PERMANECE EXIBINDO
 lcd.clear();// LIMPA O DISPLAY
 lcd.setCursor(0, 0);
 lcd.print("Tutoriais"); // EXIBE O SEGUNDO TEXTO NA PRIMEIRA LINHA
 lcd.setCursor(0, 1);
 lcd.print("CompartilheCURTA"); // EXIBE O SEGUNDO TEXTO NA SEGUNDA LINHA
 delay(5000);
}
