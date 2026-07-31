# ESP32 Short: Solderless RGB Color Mixer 🎨💡

An interactive, vertical-friendly quick project built using a 30-pin ESP32 DevKit V1. Mix custom colors on an RGB LED using three pushbuttons to select channels and a single potentiometer to control brightness!

## 🛒 Components Needed
* **1x** ESP32 30-pin Development Board (DevKit V1)
* **1x** Solderless Breadboard
* **1x** Common Cathode RGB LED
* **3x** Pushbuttons (Tactile switches)
* **1x** 10k Potentiometer
* **3x** 220Ω Resistors (for LED safety)
* **Jumper Wires**

---

## ⚡ Wiring Guide (Breadboard Layout)

### Potentiometer:
* **Left Pin:** 3.3V
* **Right Pin:** GND
* **Center Pin (Wiper):** GPIO 34 (Analog Input)

### Pushbuttons (Using Internal Pull-ups):
* **Button 1 (Red Selector):** GPIO 12 -> Other side to GND
* **Button 2 (Green Selector):** GPIO 13 -> Other side to GND
* **Button 3 (Blue Selector):** GPIO 14 -> Other side to GND

### RGB LED (Common Cathode):
* **Red Leg:** 220Ω Resistor -> GPIO 25
* **Green Leg:** 220Ω Resistor -> GPIO 26
* **Blue Leg:** 220Ω Resistor -> GPIO 27
* **Longest Leg (Cathode):** GND

---

## 🚀 How to Run
1. Open the Arduino IDE.
2. Ensure you have the **ESP32 Board Package** installed via Board Manager.
3. Select your ESP32 board and correct COM port.
4. Copy and paste the code from `esp32_rgb_mixer.ino`.
5. Upload and start mixing colors!
