// Подключаем стандартную библиотеку LiquidCrystal
#include <LiquidCrystal.h>
 
// Инициализируем объект-экран, передаём использованные 
// для подключения контакты на Arduino в порядке:
// RS, E, DB4, DB5, DB6, DB7
LiquidCrystal lcd(12, 11, 4, 5, 6, 7);
int i=0;
int MenuPos = 0;
int MenuLife = 0;
int buttonUp = 8;
int buttonSelect = 9;
int buttonDown = 10;
int food =100;
int happy = 100;
int money = 1000;
int sleep = 100;
void setup() 
{
    pinMode(buttonUp, INPUT);
    pinMode(buttonDown, INPUT);
    pinMode(buttonSelect, INPUT);
    lcd.begin(16, 2);
    lcd.print("Real Life Demo");
    lcd.setCursor(5,1);
    lcd.print("By Igor");
}
void loop(){
  delay(3000);
  lcd.clear();
  if(i == 0){
  if(digitalRead(buttonUp) == HIGH)
{
  MenuPos++;
}

  if(digitalRead(buttonDown) == HIGH)
{
 MenuPos--;
}
  if(MenuPos == 5){
    MenuPos = 0;
  }
if(MenuPos = 0){
  lcd.clear();
  delay(1000);
  lcd.print("Job");
  lcd.setCursor(0,1);
  lcd.print("-5H -5S -5F +100M");
}
  if(MenuPos = 1){
  lcd.clear();
  delay(1000);
  lcd.print("eat");
  lcd.setCursor(0,1);
  lcd.print("+2H+3S+10F-15M");  
  }
  if(MenuPos = 2){
  lcd.clear();
  lcd.print("Cinema");
  lcd.setCursor(0,1);
  lcd.print("+15H-5S-5F-20M");
  }
  if(MenuPos = 3){
  lcd.clear();
  delay(1000);
  lcd.print("My life");
  lcd.setCursor(0,1);
  lcd.print("CHECK");
  }
  if(MenuPos = 4){
  lcd.clear();
  delay(1000);
  lcd.print("H-happy F-hungry");
  lcd.setCursor(0,1);
  lcd.print("M-money S-energy");
  }
 if(digitalRead(buttonSelect) == HIGH & MenuPos == 0){
  happy = happy - 5;
  sleep = sleep -5;
  food = food - 5;
  money = money + 100;
 }
 if(digitalRead(buttonSelect) == HIGH & MenuPos == 1){
  happy = happy + 2;
  sleep = sleep +3;
  food = food + 10;
  money = money - 15;
 }
 if(digitalRead(buttonSelect) == HIGH & MenuPos == 2){
  happy = happy + 15;
  sleep = sleep - 5;
  food = food - 5;
  money = money - 25;
 }
 
 if(digitalRead(buttonSelect) == HIGH & MenuPos == 3){
  i = 1;
 }
  }
  if(i=1){
   if(digitalRead(buttonUp) == HIGH)
{
  MenuLife++;
}
  if(digitalRead(buttonDown) == HIGH)
{
 MenuLife--;
}
  if(MenuLife = 4){
    MenuLife = 0;
  }
  if(MenuLife==0){
    lcd.clear();
    lcd.print("Happy");
    lcd.setCursor(0,1);
    lcd.print(happy);
  }
  if(MenuLife==1){
    lcd.clear();
    lcd.print("Hungry");
    lcd.setCursor(0,1);
    lcd.print(food);
  }
  if(MenuLife==2){
    lcd.clear();
    lcd.print("Money");
    lcd.setCursor(0,1);
    lcd.print(money);
  }
  if(MenuLife==3){
    lcd.clear();
    lcd.print("Energy");
    lcd.setCursor(0,1);
    lcd.print(sleep);
  }
  if(digitalRead(buttonSelect)==HIGH){
    i=0;
  }
 }
}
