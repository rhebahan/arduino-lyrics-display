#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2); 

void efek(String text, int kolom, int baris, int time){
  lcd.setCursor(kolom, baris);
  lcd.print(text);
  delay(time);
}

void setup() {
  lcd.init();                      
  lcd.backlight();                 
  delay(2000);

  efek("something", 0, 0, 540);
  efek("about", 0, 1, 500);
  efek("you", 6, 1, 675);
  lcd.clear();

  efek("that", 0, 0, 480);
  efek("now", 0, 1, 500);
  lcd.clear();

  efek("i", 0, 0, 250);
  efek("can't", 2, 0, 500);
  efek("remember", 0, 1, 1040);
  lcd.clear();

  efek("it's", 0, 0, 250);
  efek("the", 5, 0, 250);
  efek("same", 0, 1, 550);
  lcd.clear();

  efek("damn", 0, 0, 550);
  efek("thing", 0, 1, 670);
  lcd.clear();

  efek("that", 0, 0, 250);
  efek("made", 0, 1, 550);
  lcd.clear();
  
  efek("my", 0, 0, 300);
  efek("heart", 3, 0, 470);
  efek("surrender", 0, 1, 1110);
  lcd.clear();

  efek("and", 0, 0, 250);
  efek("i", 4, 0, 200);
  efek("miss", 0, 1, 240);
  efek("you", 5, 1, 275);
  lcd.clear();
  
  efek("on", 0, 0, 250);
  efek("a", 0, 1, 250);
  efek("train", 2, 1, 470);
  lcd.clear();
  
  efek("i'll", 0, 0, 430);
  efek("miss", 0, 1, 700);
  efek("you", 5, 1, 350);
  lcd.clear();

  efek("in", 0, 0, 350);
  efek("the", 3, 0, 350);
  efek("morning", 0, 1, 350);
  lcd.clear();
  
  efek("i", 0, 0, 1100);
  efek("never", 2, 0, 450);
  efek("know", 0, 1, 550);
  efek("what", 5, 1, 250);
  lcd.clear();
  
  efek("to", 0, 0, 350);
  efek("think", 3, 0, 450);
  efek("about", 0, 1, 1000);
  lcd.clear();
  delay(250);
  
  efek("i", 0, 0, 400);
  efek("think", 2, 0, 500);
  efek("about", 0, 1, 1110);
  efek("you", 6, 1, 1100);
  lcd.clear();
  delay(200);
  
  efek(".", 6, 0, 300);
  efek(".", 7, 0, 300);
  efek(".", 8, 0, 300);
}

void loop() {


}

