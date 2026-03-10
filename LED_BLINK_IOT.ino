//This is My first Programming 
#define my_led 7 //global Declaration,LED pin no.7

void setup() {
  pinMode(my_led, OUTPUT);

}

void loop() {
  digitalWrite(my_led, HIGH);
  delay(1000);
  digitalWrite(my_led, LOW);
  delay(1000);
}
