/*

*/
int inPIN = A2;
int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(A2,INPUT);

    
}

void loop() {
  
  val = analogRead(A2);
  Serial.println(val, HEX);
  delay(1000);
    
}
