const int Pin = 2;
int PosX = A0;
int PosY = A1;
int PosZ = A2;

int aPosX;
int aPosY;
int aPosZ;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(Pin, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:

  aPosX = analogRead(PosX);
  aPosY = analogRead(PosY);
  aPosZ = analogRead(PosZ);

  Serial.println("PosX : " + (String)aPosX + " / PosY : " + (String)aPosY + " / PosZ : " + (String)aPosZ);
  delay(500);
}
