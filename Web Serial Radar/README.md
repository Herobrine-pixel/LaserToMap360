
# LaserToMap360 Web Viewer

This web app displays live 360° scan data from your Arduino over USB (Serial) using the Web Serial API.

## 📦 How to Use

1. Open `index.html` in **Google Chrome** (Desktop or Android).
2. Click **"Connect to Arduino"**.
3. Select the serial port of your Arduino.
4. Watch the live radar plot update.

## ⚠️ Requirements

- Google Chrome (Desktop or Android)
- Your Arduino must output JSON like:
  `{"angle": 90, "distance": 1234}`

## 📱 Mobile Support

Works on Android **Google Chrome**. USB-OTG is required to connect Arduino.

