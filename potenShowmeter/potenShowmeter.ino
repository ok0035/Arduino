const int ledPin = 11;
int poten = A0;
int mapSignal = 0;
int analog = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  analog = analogRead(poten);
  mapSignal = map(analog, 0, 1023, 0, 255);
  Serial.println(mapSignal);
  
//  delay(500);

  analogWrite(ledPin, mapSignal);
  
}
