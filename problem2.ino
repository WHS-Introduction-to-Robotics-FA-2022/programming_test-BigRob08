/*

*/


int redPin = 11;
int greenPin = 10;
int bluePin = 9;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  
    
}

void loop() {
  analogWrite(redPin, 128);
    analogWrite(greenPin, 2);
  analogWrite(bluePin, 16);
    
}
