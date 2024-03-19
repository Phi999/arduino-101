// C++ code
//
int beculet = 10;

void setup()
{
  pinMode(beculet, OUTPUT);
}

void loop()
{
  digitalWrite(beculet, HIGH);
  delay(1000); //asteapta 1 secunda
  digitalWrite(beculet, LOW);
  delay(1000); // asteapta 1 secunda
}
