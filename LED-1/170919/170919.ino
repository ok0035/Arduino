int i;

const int BLUE = 6;
const int GREEN = 5;
const int RED = 3;

int OnLight = 255;
int OffLight = 0;
int msec = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  
  analogWrite(RED, OnLight);
  delay(msec);
  analogWrite(RED, OffLight);
  analogWrite(BLUE, OnLight);
  delay(msec);
  analogWrite(BLUE, OffLight);
  analogWrite(GREEN, OnLight);
  delay(msec);
  analogWrite(GREEN, OffLight);


//    analogWrite(GREEN, OnLight);
//    delay(400);
//    analogWrite(GREEN, OffLight);
//    delay(400);

  Serial.println(OnLight);
  Serial.println(OffLight);
}

void RGB(const int RED, const int GREEN, const int BLUE){

  if(RED == 3) {
    analogWrite(RED, 255);
  }

  if(RED == 3) {
    analogWrite(RED, 255);
  }

  if(RED == 3) {
    analogWrite(RED, 255);
  }

  analogWrite()
  
}
