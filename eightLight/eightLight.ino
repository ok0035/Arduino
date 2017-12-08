int i;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  for(i = 2; i<10; i++) {
    pinMode(i, OUTPUT);
  }

  i = 2;
}

void loop() {
  // put your main code here, to run repeatedly:
  if(i == 10){
    i = 2;
    for(i=2; i<10; i++) {
      digitalWrite(i, LOW);
      delay(100);
    }
    i = 2;
  }
  digitalWrite(i, HIGH);
  delay(100);
  i++;
}
