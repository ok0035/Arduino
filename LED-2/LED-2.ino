int i;
int flag = 0;

const int ledPin6 = 6;
const int ledPin5 = 5;
const int ledPin3 = 3;

int light1 = 0;
int light2 = 255;
int num = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  if(flag == 0) {
    light1 += 5;
    light2 -= 5;
  } else {
    light1 -= 5;
    light2 += 5;
  }

  if(light1 == 255) flag = 1;
  if(light1 == 0) flag = 0;

  analogWrite(ledPin5, light1);
  analogWrite(ledPin3, light2);

  Serial.println("5         " + (String)light1);
  Serial.println("3         " + (String)light2);
  
  delay(num);

    
//    digitalWrite(ledPin5, LOW);
//    digitalWrite(ledPin3, light2);
//    delay(num);

}
