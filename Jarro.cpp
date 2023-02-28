#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 1);
int Jarra4 = 12; // Led vermelho , jarra de 4L
int Jarra3 = 11; // Led amarelo , jarra de 3L
int torneira = 8; // motor
int comeco = 0;

void setup()    
{
 lcd.begin(16,2);
  
  pinMode(Jarra4, OUTPUT);
  pinMode(Jarra3, OUTPUT);
  pinMode(torneira, OUTPUT);
  }

void loop()
{
  digitalWrite(Jarra4, LOW);
  digitalWrite(Jarra3, LOW);
  digitalWrite(torneira, LOW);
  lcd.clear();
   lcd.setCursor(0, 0);
   lcd.print("SISTEMA LIGADO"); // comeco
    if(digitalRead(comeco) == HIGH)
  {
    digitalWrite(torneira, HIGH); // liga torneira
     lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("TORNEIRA LIGADA");
      delay(2000);
      lcd.clear();
      lcd.setCursor(0,0);
  	digitalWrite(Jarra3, HIGH); // led amarela acessa
  	lcd.print("JARRA 3 CHEIA");
  	delay(3000); //  representa os litros passados de uma jarra a outra 
  
  	digitalWrite(Jarra3, LOW); // led amarela desligada
  	digitalWrite(Jarra4, HIGH); // led vermelha acessa
    lcd.clear();
  	lcd.setCursor(0,0);
  	lcd.print("JARRA 4, 3 LITROS");
  	lcd.setCursor(1,1);
  	lcd.print("JARRA 3 VAZIA");
  	delay(3000); // tempo que enchendou a jarra 3
  
  	digitalWrite(Jarra3, HIGH); // led amarela acessa
    lcd.clear();
  	lcd.setCursor(0,0);
  	lcd.print("JARRA 3 CHEIA");
  	digitalWrite(Jarra3, LOW); // led amarela desligada
  	delay(1000); // tempo que encheu demorou para encher jarra 4
    lcd.clear();
  	lcd.setCursor(0,0);
  	digitalWrite(Jarra3, HIGH); // led amarela acessa
  	lcd.print("JARRA 4 CHEIA");
  	lcd.setCursor(1,1);
  	lcd.print("JARRA 3, 2L");
  	delay(4000); // tempo que levou para esvaziar 
  
  	digitalWrite(Jarra4, LOW); // led vermelha apaga
    lcd.clear();
  	lcd.setCursor(0,0);
  	lcd.print("JARRA 4 VAZIA");
  	lcd.setCursor(1,1);
  	lcd.print("JARRA 3, 2L");
  	delay(2000); // litros da jarra 3 foram para jarra 4
      
  	digitalWrite(Jarra3, LOW); // led amarela apaga
  	digitalWrite(Jarra4, HIGH); // led vermelha acende
    lcd.clear();
  	lcd.setCursor(0,0);
  	lcd.print("JARRA 3 VAZIA");
  	lcd.setCursor(1,1);
  	lcd.print("JARRA 4, 2L ");
    delay(500);
    lcd.clear();
  	lcd.setCursor(0,0);
  	lcd.print("FIM");
    }
 
}
 

