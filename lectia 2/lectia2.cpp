// C++ code
//
int bec1 = 12;
int bec2  = 11;
int bec3 = 10;
void setup()
{
  pinMode(bec1, OUTPUT);
  pinMode(bec2, OUTPUT);
  pinMode(bec3, OUTPUT);

}

void loop()
{
  digitalWrite(bec3, LOW);
  digitalWrite(bec1, HIGH);
  delay(500);
  digitalWrite(bec1, LOW);
  digitalWrite(bec2, HIGH);
  delay(500);
  digitalWrite(bec2, LOW);
  digitalWrite(bec3, HIGH);
  delay(500);
  
}
