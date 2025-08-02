int val = 0;
int x = 100;
int y = 200;
void setup(){
  Serial.begin(9600);
}

void loop(){
  val = analogRead(1);
  x++;
  // Serial.println(val);
  Serial.println(String("x:") + x + " y:" + y);
  delay(100);
}