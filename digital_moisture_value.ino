#define sensor_pin 8
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = digitalRead(sensor_pin); // Read the digital value from sensor
  if (sensorValue == 1){
    Serial.print("WET!");
  }
  else {
    Serial.print("Dry!"); 
    }

    delay(200);
}
