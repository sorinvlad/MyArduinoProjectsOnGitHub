void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int nivelIluminare = analogRead(0);
Serial.println(nivelIluminare);
if (nivelIluminare > 3)
{
  digitalWrite(13, HIGH);
}
else
{
   digitalWrite(13, LOW);
}
delay (200);
}
