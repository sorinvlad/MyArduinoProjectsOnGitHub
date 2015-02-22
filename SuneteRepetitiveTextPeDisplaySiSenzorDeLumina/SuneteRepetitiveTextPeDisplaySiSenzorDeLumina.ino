// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7,6, 5, 4, 3, 2); //LCD port settings

int numarTiuituri = 5;
int portAudio = 10; //the used port to play sounds
void tiparesteAlexandra(int Index); //declare a simple funtion with one param

void setup() {
  // put your setup code here, to run once:
// set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD - this is the initial message displayed until the 
  // light sensor is going to be used for displying different messages deoendng on the light level
  lcd.setCursor(0,0);
  lcd.print("Aliuca & Irena");
  lcd.setCursor(0,1);
  lcd.print("sunt frumoase !");
pinMode(portAudio, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

Serial.println (numarTiuituri);
while(numarTiuituri > 0)
{
  for(int i=100; i < 110; i++) //play an increasing tone
  {
    tone(portAudio, i);
    Serial.println("Sunet cu frecventa 100");
    delay(100);
    tone(portAudio, i+250);
    Serial.println("Sunet cu frecventa marita cu 250");
    delay(100);
  }
  
  for(int i=110; i > 100; i--) //play a decreasing tone
  {
    tone(portAudio, i);
    Serial.println("Sunet cu frecventa 100");
    delay(100);
    tone(portAudio, i+250);
    Serial.println("Sunet cu frecventa marita cu 250");
    delay(100);
  }
  numarTiuituri--;
  Serial.println (numarTiuituri);
  if(numarTiuituri == 0)
  {
    pinMode(portAudio, INPUT); //stop the sound cause is noisy :-) !!!!
  }
} //acolada de la ciclul While
if(numarTiuituri == 0)
  {
    //Serial.println("Ce bine e sa fie liniste !");
    //tiparesteAlexandra(5); //call a simple function
    
    // Afiseaza texte pe ecran in functie de intensitatea luminii
    int nivelIluminare = analogRead(0); // read the values sent by the light sensor connected to analog port 0
    Serial.println(nivelIluminare); //print light level on the Serial monitor window
    lcd.clear();
    if (nivelIluminare > 4) //the light level is considered high and is displaying a special text
    {
      lcd.setCursor(0,0);
      lcd.print("Incepe sa devina");
      lcd.setCursor(0,1);
      lcd.print("mult mai luminos");
      Serial.println(nivelIluminare);
      delay(500);
    }
    else //the light level is considered low and is displaying a special text
    {
      lcd.setCursor(0,0);
      lcd.print("Incepe sa devina");
      lcd.setCursor(0,1);
      lcd.print("cam intunecat !!");
      Serial.println(nivelIluminare);
      delay(500);
    } //acolada de la if (nivelIluminare > 4)
   
  } //acolada de la if(numarTiuituri == 0)
} //acolada de la metoda loop()

void tiparesteAlexandra(int Index) //simple text function to display a text for Index number of times
{
  while (Index > 0)
  {
    Serial.println("Alexandra si Irena sunt frumoase si desteapte......ca mama lor !!");
    Index--;
  }
}
