// C++ code
//
int bec1 = 12;
int bec2  = 11;
int bec3 = 10;
const int trigPin = 7;
const int echoPin = 6;
int dist(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  int duration = pulseIn(echoPin, HIGH);
  int distanceCm= duration*0.034/2;
  return distanceCm;
}


void setup()
{
  pinMode(bec1, OUTPUT);
  pinMode(bec2, OUTPUT);
  pinMode(bec3, OUTPUT);
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}

void loop()
{
  int distanta = dist();
  if(distanta < 15){
  	digitalWrite(bec1, HIGH);
    digitalWrite(bec2, LOW);
    digitalWrite(bec3, LOW);
  }else if(distanta < 30){
  	digitalWrite(bec1, LOW);
    digitalWrite(bec2, HIGH);
    digitalWrite(bec3, LOW);
  }else {
  	digitalWrite(bec1, LOW);
    digitalWrite(bec2, LOW);
    digitalWrite(bec3, HIGH);
  
  }
  
}
