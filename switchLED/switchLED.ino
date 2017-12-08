const int ledPin = 12;
const int inputPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {

  if(digitalRead(inputPin) == LOW) {
    if(digitalRead(ledPin) == LOW)
      digitalWrite(ledPin, HIGH);
  } else {
    if(digitalRead(ledPin) == HIGH)
      digitalWrite(ledPin, LOW);
  }

  Serial.println(digitalRead(ledPin));

}
