int value;
// int 型でいいのか？
int datas[4];
int pins[4] = { A0, A1, A2, A3 };
int i = 0;
int data;       
char buf[5];              

void setup() {
  Serial.begin(9600);
  while (!Serial)
    ;  // 準備が終わるのを待つ
  Serial.write("hello world");

  // A〇ピンが入力用として動作する．内部プルアップ抵抗がONのため未接続は5V．
  pinMode(A0, INPUT); 
}

void loop() {
  float v = (analogRead(A0) * 5.0) / 1023.0;
  // double maxValue = 0.5;
  // double minValue = 0.2;
  sprintf(buf, "%4d", analogRead(A0));

  Serial.print(buf);
  Serial.print(" , ");
  Serial.print(v,7);
  Serial.println("[V]");
  // Serial.print(maxValue,2);
  // Serial.print(",  ");
  // Serial.println(minValue,2);  
  delay(100);  // 合計1ms = 1kHz
}