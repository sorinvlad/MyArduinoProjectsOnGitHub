//int ledGalben  = 2;
int ledRosu = 13;
int ledAlbastru = 12;

void setup() {
  // put your setup code here, to run once:
//pinMode(ledGalben, OUTPUT);
pinMode(ledRosu, OUTPUT);
pinMode(ledAlbastru, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

//aprinde led Galben
/*digitalWrite(ledGalben, HIGH);
digitalWrite(ledRosu, LOW);
digitalWrite(ledAlbastru, LOW);
Serial.println(ledGalben);
delay(1000);
*/
//aprinde led Rosu
//digitalWrite(ledGalben, LOW);
digitalWrite(ledRosu, HIGH);
digitalWrite(ledAlbastru, LOW);
Serial.println(ledRosu);
delay(100);

//aprinde led Albastru
//digitalWrite(ledGalben, LOW);
digitalWrite(ledRosu, LOW);
digitalWrite(ledAlbastru, HIGH);
Serial.println(ledAlbastru);
delay(100);

}
