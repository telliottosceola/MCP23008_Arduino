#include <Arduino.h>
#include <MCP23008.h>

MCP23008 relayController;

void setup(){
  relayController.setRelays(4);
  relayController.setAddress(0,0,0);
}

void loop(){
  for(int i = 0; i < 5; i++){
    relayController.turnOnRelay(i);
    delay(100);
  }
  for(int i = 0; i < 5; i++){
    relayController.turnOffRelay(i);
    delay(100);
  }
}
