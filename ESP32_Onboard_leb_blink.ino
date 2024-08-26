#define INTLED 2

void setup() {
  pinMode(INTLED,OUTPUT);

}
void loop() {
  delay(1000);
  digitalWrite(INTLED,HIGH);
  delay(1000);
  digitalWrite(INTLED,LOW); 

}
