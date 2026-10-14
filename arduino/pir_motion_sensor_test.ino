// PIR motion sensor diagnostic sketch reproduced from the project report.
// This is NOT the complete automatic light/fan control firmware.
#define MOTION_SENSOR_PIN 2

void setup() {
  pinMode(MOTION_SENSOR_PIN, INPUT);
  Serial.begin(115200);
  Serial.println("Motion Sensor Test");
}

void loop() {
  int motionValue = digitalRead(MOTION_SENSOR_PIN);
  if (motionValue == HIGH) {
    Serial.println("Motion detected!");
  } else {
    Serial.println("No motion.");
  }
  delay(1000);
}
