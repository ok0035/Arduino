int i = 65;
short s = 65;
long l = 65;
float f = 65.0;
double d = 65.00;

String arr[] = {"Binary : ", "Decimal : ", "Hexdecimal : ", "ASCII : "};

char c = 'a';
String str = "문자열";
boolean isTrue = true;


void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

    //문자
    Serial.println("***Character***");
    Serial.print(arr[3]);
    Serial.write(c);
    Serial.println();
    Serial.print(arr[0]);
    Serial.println(c, BIN);
    Serial.print(arr[1]);
    Serial.println(c, DEC);
    Serial.print(arr[2]);
    Serial.println(c, HEX);

    Serial.println();
    Serial.println("============================================================");
    Serial.println();

    //문자열
//    Serial.println(str, BIN);
//    Serial.println(str, DEC);
//    Serial.println(str, HEX);

    //정수형
    Serial.println("***Integer***");
    Serial.print(arr[0]);
    Serial.println(i, BIN);
    Serial.print(arr[1]);
    Serial.println(i, DEC);
    Serial.print(arr[2]);
    Serial.println(i, HEX);

    Serial.println();
    Serial.println("============================================================");
    Serial.println();

    //float
    Serial.println("***Float***");
    Serial.print(arr[0]);
    Serial.println(f, BIN);
    Serial.print(arr[1]);
    Serial.println(f, DEC);
    Serial.print(arr[2]);
    Serial.println(f, HEX);

    Serial.println();
    Serial.println("============================================================");
    Serial.println();

    //double
    Serial.println("***Double***");
    Serial.print(arr[0]);
    Serial.println(d, BIN);
    Serial.print(arr[1]);
    Serial.println(d, DEC);
    Serial.print(arr[2]);
    Serial.println(d, HEX);

    Serial.println();
    Serial.println("============================================================");
    Serial.println();

    //short
    Serial.println("***Short***");
    Serial.print(arr[0]);
    Serial.println(s, BIN);
    Serial.print(arr[1]);
    Serial.println(s, DEC);
    Serial.print(arr[2]);
    Serial.println(s, HEX);

    Serial.println();
    Serial.println("============================================================");
    Serial.println();

    //long
    Serial.println("***Long***");
    Serial.print(arr[0]);
    Serial.println(l, BIN);
    Serial.print(arr[1]);
    Serial.println(l, DEC);
    Serial.print(arr[2]);
    Serial.println(l, HEX);

    Serial.println();
    Serial.println("============================================================");
    Serial.println();

    //boolean
    Serial.println("***Boolean***");
    Serial.print(arr[0]);
    Serial.println(isTrue, BIN);
    Serial.print(arr[1]);
    Serial.println(isTrue, DEC);
    Serial.print(arr[2]);
    Serial.println(isTrue, HEX);

    Serial.println();
    Serial.println("============================================================");
    Serial.println();

    i++;
    s++;
    f++;
    d++;
    l++;
    c++;

    if(isTrue) isTrue = false;
    else isTrue = true;

    delay(3000);
    
}
