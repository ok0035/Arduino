//초음파
const int trigPin = 13;
const int echoPin = 12;
int pulsewidth;
int distance;
int distanceOld;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  digitalWrite(trigPin, LOW);

  distance = 0;
  distanceOld = 0;
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  pulsewidth = pulseIn(echoPin, HIGH);

  distance = pulsewidth / 58;
      
  if(distance != distanceOld) {
    Serial.print(distance);
    Serial.print("cm\n");

  }
  
  distanceOld = distance;
  delay(100);

}
