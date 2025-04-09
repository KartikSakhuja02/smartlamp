int LDR_Pin = A0;  // LDR sensor connected to A0 pin
int LED_Pin = 9;   // LED connected to pin 9
int threshold = 500; // Light threshold value


void setup() {
  pinMode(LED_Pin, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  int lightValue = analogRead(LDR_Pin);  // Read sensor value
  Serial.println(lightValue);
  
  if (lightValue < threshold) {
    digitalWrite(LED_Pin, HIGH);  // Turn on LED if it's dark
  } else {
    digitalWrite(LED_Pin, LOW);   // Turn off LED if it's bright
  }
  
  delay(500); // Small delay for stability
}
