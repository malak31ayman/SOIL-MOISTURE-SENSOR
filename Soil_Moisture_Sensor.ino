// Arduino Soil moisture sensor will show the humidity
// level using the 5 LEDs connected to Arduino.
#define ledPin1 2
#define ledPin2 3
#define ledPin3 4
#define ledPin4 5
#define ledPin5 6
#define sensorPin A0

void setup()
{
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
}

void loop()
{
  int sensorValue = analogRead(sensorPin);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
  digitalWrite(ledPin3, LOW);
  digitalWrite(ledPin4, LOW);
  digitalWrite(ledPin5, LOW);
  if (sensorValue < 200) {
    digitalWrite(ledPin5, HIGH);
  } else {
    if (sensorValue < 400) {
      digitalWrite(ledPin5, HIGH);
      digitalWrite(ledPin4, HIGH);
    } else {
      if (sensorValue < 600) {
        digitalWrite(ledPin5, HIGH);
        digitalWrite(ledPin4, HIGH);
        digitalWrite(ledPin3, HIGH);
      } else {
        if (sensorValue < 800) {
          digitalWrite(ledPin5, HIGH);
          digitalWrite(ledPin4, HIGH);
          digitalWrite(ledPin3, HIGH);
          digitalWrite(ledPin2, HIGH);
        } else {
          digitalWrite(ledPin5, HIGH);
          digitalWrite(ledPin4, HIGH);
          digitalWrite(ledPin3, HIGH);
          digitalWrite(ledPin2, HIGH);
          digitalWrite(ledPin1, HIGH);
        }
      }
    }
  }
  delay(100);
}
