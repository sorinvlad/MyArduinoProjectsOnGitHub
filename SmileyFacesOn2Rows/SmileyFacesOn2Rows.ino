#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
/*
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
*/
byte smiley[8] = {
  B00000,
  B10001,
  B00000,
  B00000,
  B10001,
  B01110,
  B00000,
};

int n = 2;


void setup() {
  // put your setup code here, to run once:
//pinMode(7, OUTPUT);
Serial.begin(9600);
lcd.begin(16,2);
lcd.clear();
 lcd.createChar(0, smiley);
  lcd.begin(16, 2);
for (int x=0;x <= 6;x++)
{
  Serial.println (n);
  lcd.write(byte(0));
  lcd.setCursor(n+x,0);
  lcd.write(byte(0));
  n++;
  lcd.setCursor(n+x+1,0);
  Serial.println (n);
}
lcd.setCursor(1,1); //move on the line 2 of the scren on char 1
n = 2;
for (int x=0;x <= 6;x++)
{
  Serial.println (n);
  lcd.write(byte(0));
  lcd.setCursor(n+x+1,1);
  lcd.write(byte(0));
  n++;
  lcd.setCursor(n+x+2,1);
  Serial.println (n);
}
  //lcd.setCursor(0,0);
}

void loop() {
  // put your main code here, to run repeatedly:

}
