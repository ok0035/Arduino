unsigned char digit[] = {
  0xfc,
  0x60, 0xda, 0xf2, 0x66, 0xb6,
  0xbe, 0xe4, 0xfe, 0xe6
};

void setup() {
  // put your setup code here, to run once:

  for(int i=2; i<10; i++) {
    pinMode(i, OUTPUT);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<10; i++) {
    for(int k=2; k<10; k++) {
      boolean onOff = bitRead(digit[i], 9-k);
      digitalWrite(k, onOff);
    }
  delay(400);
  }

}
