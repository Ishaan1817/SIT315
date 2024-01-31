const int pir = 4;
void setup() {
  
  pinMode(4, INPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  if(digitalRead(4) == HIGH)
  {
    Serial.println("MOTION DECTECTED");
    digitalWrite(13, HIGH);
  }
  else
  {
    Serial.println("MOTION NOT DETECTED");
    digitalWrite(13, LOW);
  }
  delay(1000);
}