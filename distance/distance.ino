//pin번호
const char trigPin = 13;
const char echoPin = 12;
int piezoPin = 9;
const int ledPin = 4;

//LED
int blinkNumber = 0;
int flag = 0;

//초음파
int pulsewidth;
int distance;
int distanceOld;

//멜로디
#define C 262 // 도 
#define D 294 // 레 
#define E 330 // 미 
#define F 349 // 파 
#define G 392 // 솔 
#define A 440 // 라 
#define B 494 // 시

int tempo = 200; // duration 옵션 값 설정 
//int notes[25] = { G, G, A, A, G, G, E, G, G, E, E, D, G, G, A, A, G, G, E, G, E, D, E, C }; 
int notes[26] = { E, D, C, D, E, E, E, D, D, D, E, G, G, E, D, C, D, E, E, E, D, D, E, D, C};

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  
  pinMode (piezoPin, OUTPUT); 
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);

  digitalWrite(trigPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  pulsewidth = pulseIn(echoPin, HIGH);

  distance = pulsewidth / 58;

  if(distance <= 20 && distance >= 0) digitalWrite(ledPin, HIGH);
  else digitalWrite(ledPin, LOW);
      
  if(distance <= 200 || distance >= 2) {

    if(distance != distanceOld) {
      Serial.print(distance);
      Serial.print("cm\n");

      if(distance <= 20 && distance >= 0) {
        
        for (int i = 0; i < 12; i++) { 
          tone (piezoPin, notes[ i ], tempo); 
          delay (300); 
        } 
        delay(100); // 멜로디 중간에 짧게 멈추는 용도 
      
        for (int i = 12; i < 26; i++) { 
          tone (piezoPin, notes[ i ], tempo); 
          delay(300); 
        }
        
      } else flag = 0;
    } 
  }
  
  distanceOld = distance;
  delay(100);
}
