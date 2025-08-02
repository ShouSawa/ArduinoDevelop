void setup() {
  pinMode(13, OUTPUT);//13ピンをOUTPUTに設定
}

void loop() {
  digitalWrite(13, HIGH);//13ピンのLEDをONにする
delay(2000);//1000msec(1秒)待つ
  digitalWrite(13, LOW);//13ピンのLEDをOFFにする
  delay(2000);//1000msec(1秒)待つ
}