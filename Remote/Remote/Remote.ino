#include <boarddefs.h>
#include <IRremote.h>
#include <IRremoteInt.h>
#include <ir_Lego_PF_BitStreamEncoder.h>

int irPin=11;
IRrecv irrecv(irPin);
decode_results results;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
}

void loop(){
  if(irrecv.decode(&results)){
    if(results.value != 0xFFFFFFFF){
      Serial.print("Received Code is : ");
      Serial.println(results.value,HEX);
    };
    irrecv.resume();
  }
}

