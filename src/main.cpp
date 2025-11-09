#include <Arduino.h>

// put function declarations here:
// int myFunction(int, int);
void ledBrightness(int brightness);
void runLed(int duration,int brightness);

bool isFunctionRunning = false;
unsigned long startTime;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(23, OUTPUT);
  
}

void loop() {

  runLed(500,1);
  runLed(500,2);
  runLed(500,3);
  runLed(500,4);
  runLed(500,5);
  runLed(500,6);
  runLed(500,7);
  runLed(500,8);
  runLed(500,9);
  runLed(500,10);
  delay(1000);
}

// put function definitions here:


void ledBrightness(int brightness) {
  
  if (brightness < 0) brightness = 0;
  if (brightness > 10) brightness = 10;
  
  int off = 10 - brightness;

  digitalWrite(23, HIGH);
  delay(brightness);     
  digitalWrite(23, LOW); 
  delay(off);              

}


void runLed(int duration,int brightness) {

    startTime = millis(); // Record the start time
    while (millis() - startTime < duration) {
      // The function is still within its run duration, so we keep calling it.
      ledBrightness(brightness);
    }
  }

