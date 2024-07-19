#include <LiquidCrystal.h>
int h=0,m=0,s=0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
LiquidCrystal lcd1(13, 10, 9, 8, 7, 6);
void setup() {
  lcd.begin(16, 2);
  lcd1.begin(16, 2);
}
void loop() {
  
 s=s+1;
  if(s==60){
    m=m+1;
    s=0;
  }
  
  if(m==60){
    m=0;
    h=h+1;
  }
   lcd1.print("Bajrangi");
  lcd1.setCursor(0,1);
  lcd1.print("Mishra");
  lcd.print("HOURS=");
  lcd.print(h);
  lcd.setCursor(10,0);
  lcd.print("MIN=");
  lcd.print(m);
  lcd.setCursor(0,1);
  lcd.print("SEC=");
  lcd.print(s);
   delay(1000);
  lcd.clear();
 
}
