#define C 262 // 도 
#define D 294 // 레 
#define E 330 // 미 
#define F 349 // 파 
#define G 392 // 솔 
#define A 440 // 라 
#define B 494 // 시 

int piezoPin = 9; 
int tempo = 200; // duration 옵션 값 설정 
//int notes[25] = { G, G, A, A, G, G, E, G, G, E, E, D, G, G, A, A, G, G, E, G, E, D, E, C }; 
int notes[26] = { E, D, C, D, E, E, E, D, D, D, E, G, G, E, D, C, D, E, E, E, D, D, E, D, C};

void setup() { 
  pinMode (piezoPin, OUTPUT); 
} 

void loop() { 
  for (int i = 0; i < 12; i++) { 
    tone (piezoPin, notes[ i ], tempo); 
    delay (300); 
  } 
  delay(100); // 멜로디 중간에 짧게 멈추는 용도 

  for (int i = 12; i < 26; i++) { 
    tone (piezoPin, notes[ i ], tempo); 
    delay(300); 
  } 
}

