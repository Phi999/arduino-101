// C++ code
//
void setup()
{
  pinMode(10, INPUT);
    pinMode(9, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  int x = digitalRead(10);
  Serial.println(x);
  if(x == 1)digitalWrite(9, HIGH);
  else digitalWrite(9, LOW);

}
