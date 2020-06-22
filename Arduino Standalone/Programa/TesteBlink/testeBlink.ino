#define ledBlink 13

void setup() 
{
 pinMode(ledBlink, OUTPUT);
}

void loop() 
{
  digitalWrite(ledBlink, HIGH);
  delay(1000);
  digitalWrite(ledBlink, LOW);
  delay(1000);
}
