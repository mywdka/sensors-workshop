void setup() {
  Serial.begin(9600);
}

void loop() {
  //change Serial.println to Serial.write to get the data in Max
  Serial.println(analogRead(A0) / 4);
}
