
const int potPin = 34;

const int redBtnPin = 12;
const int greenBtnPin = 13;
const int blueBtnPin = 14;

const int redLedPin = 25;
const int greenLedPin = 26;
const int blueLedPin = 27;

const int freq = 5000;
const int redChannel = 0;
const int greenChannel = 1;
const int blueChannel = 2;
const int resolution = 8;

int redValue = 0;
int greenValue = 0;
int blueValue = 0;

void setup() {
  Serial.begin(115200);

  pinMode(redBtnPin, INPUT_PULLUP);
  pinMode(greenBtnPin, INPUT_PULLUP);
  pinMode(blueBtnPin, INPUT_PULLUP);

  ledcAttachChannel(redLedPin, freq, resolution, redChannel);
  ledcAttachChannel(greenLedPin, freq, resolution, greenChannel);
  ledcAttachChannel(blueLedPin, freq, resolution, blueChannel);

  Serial.println("ESP32 RGB Color Mixer Initialized.");
}

void loop() {
  int potValue = analogRead(potPin);
  int mappedBrightness = map(potValue, 0, 4095, 0, 255);

  if (digitalRead(redBtnPin) == LOW) {
    redValue = mappedBrightness;
    Serial.printf("Red set to: %d\n", redValue);
  }
  if (digitalRead(greenBtnPin) == LOW) {
    greenValue = mappedBrightness;
    Serial.printf("Green set to: %d\n", greenValue);
  }
  if (digitalRead(blueBtnPin) == LOW) {
    blueValue = mappedBrightness;
    Serial.printf("Blue set to: %d\n", blueValue);
  }

  ledcWrite(redLedPin, redValue);
  ledcWrite(greenLedPin, greenValue);
  ledcWrite(blueLedPin, blueValue);

  delay(50);
}
