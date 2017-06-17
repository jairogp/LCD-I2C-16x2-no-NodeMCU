//Caracteres Display LCD 16 x 2
//Autor: Tony Emerson Marim
//===http://www.mecatronizando.com.br===
 
#include <Wire.h>  //INCLUSÃO DE BIBLIOTECA
#include <LiquidCrystal_I2C.h> //INCLUSÃO DE BIBLIOTECA

LiquidCrystal_I2C lcd(0x3F, 16, 2); //FUNÇÃO DO TIPO "LiquidCrystal_I2C"
 
// copiar para aqui o codigo fornecido pela aplicação de criar caracteres
// caracter 1
byte punho[8] = {
B11111,
B00000,
B11111,
B00000,
B11111,
B00000,
B11111,
B00000
};
// caracter 2
byte mao[8] = {
  B01100,
  B10010,
  B10010,
  B01100,
  B00000,
  B00000,
  B00000,
  B00000
  };
// caractere 3
byte youtube[8] = {
  B11111,
  B11000,
  B10100,
  B10010,
  B10001,
  B10000,
  B10000,
  B11111
};
 byte youtube2[8] = {
  B11111,
  B00011,
  B00101,
  B01001,
  B10001,
  B00001,
  B00001,
  B11111
};
void setup() 
{

  lcd.init();   // INICIALIZA O DISPLAY LCD
  lcd.backlight(); // HABILITA O BACKLIGHT (LUZ DE FUNDO)


lcd.createChar(1, punho);

lcd.createChar(2, mao);

lcd.createChar(3, youtube);

lcd.createChar(4, youtube2);

lcd.begin(16, 2); //inicializa o LCD 16x2
 
lcd.setCursor(0, 0); //aponta para coluna 0, linha 2
lcd.write(1); //escreve o caracter
lcd.setCursor(1, 0); //aponta para coluna 0, linha 2
lcd.write(2); //escreve o caracter
lcd.setCursor(2, 0);
lcd.print(" ****CURTA****");
lcd.setCursor(1, 1); //aponta para coluna 0, linha 2
lcd.write(4); //escreve o caracter
lcd.setCursor(0, 1); //aponta para coluna 0, linha 2
lcd.write(3); //escreve o caracter
lcd.setCursor(2,1);
lcd.print(" -INSCREVA-SE- ");
 
}
 
void loop() 
{

}
