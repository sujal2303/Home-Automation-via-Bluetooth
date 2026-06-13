char data;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();

    if (data == '1') {
      digitalWrite(13, HIGH);
      Serial.println("Device ON");
    }

    if (data == '0') {
      digitalWrite(13, LOW);
      Serial.println("Device OFF");
    }
  }
}
