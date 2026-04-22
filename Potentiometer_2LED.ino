#define pot A5
#define ledgreen 7
#define ledred 2  

void setup()  {

  Serial.begin(9600);
  pinMode(pot, INPUT);   //pin type
}

void loop() {
  int x = analogRead(pot);
  //Serial.println(X);

  if(x>100) {
    digitalWrite(ledgreen, HIGH);
    digitalWrite(ledgreen, LOW);
  }
  else {
    digitalWrite(ledgreen, LOW);
    digitalWrite(ledred, HIGH);
  }
  delay(100);
}
