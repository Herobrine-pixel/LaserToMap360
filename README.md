# LaserToMap360

**LaserToMap360** is an Arduino library that uses a VL53L0X laser distance sensor and a stepper motor to perform a full 360° scan of the surroundings, outputting angle-distance data that can be used for basic spatial mapping or plotting.

## 📦 Features
- Full 360° scanning
- Uses real hardware (VL53L0X + 28BYJ-48 stepper motor)
- Outputs raw angle + distance data over Serial
- No extra configuration or setup required

## 🔌 Wiring

### VL53L0X
| VL53L0X Pin | Arduino Pin |
|------------|-------------|
| VIN        | 5V          |
| GND        | GND         |
| SDA        | A4 (Uno/Nano) |
| SCL        | A5 (Uno/Nano) |

### Stepper Motor (28BYJ-48 + ULN2003)
| Driver IN Pin | Arduino Pin |
|---------------|-------------|
| IN1           | D8          |
| IN2           | D9          |
| IN3           | D10         |
| IN4           | D11         |

## 📘 Dependencies
- [VL53L0X by Pololu](https://github.com/pololu/vl53l0x-arduino)
- [AccelStepper](https://www.airspayce.com/mikem/arduino/AccelStepper/)

Install both using the Arduino Library Manager.

## 📈 Output Format
```csv
0,820
1,824
2,812
...
359,800
```

This output can be visualized using Python, Excel, or Processing.

## 🧑‍💻 Author
Created by **Herobrine Pixel** 
           **2025**


## 🪪 License
MIT License

Copyright (c) 2025 Herobrine Sah

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the “Software”), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS”, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

# LaserToMap360 Web Viewer

Live 360° Lidar scan viewer using Web Serial API and Chart.js.
## Just open the folder name WebApp and you will find all the important resources.

## How to Use

1. Open `index.html` in **Google Chrome**
2. Click **"Connect to Arduino"**
3. Select the Arduino's USB serial port
4. Watch the 360° scan live

## Requirements

- Arduino sending JSON like: `{"angle": 90, "distance": 1234}`
- Baud rate: `115200`
- Google Chrome (desktop or Android)
- USB-OTG if on phone

## Hosting

Use GitHub Pages for live link:

- Settings → Pages → Branch: `main`, Folder: `/root`
- URL will be: `https://<your-username>.github.io/LaserToMap360/`
- 

# LaserToMap360 PlatformIO Template

This is a ready-to-use PlatformIO project that scans 360° using a VL53L0X laser sensor and a stepper motor.

## 🧪 Run it

```bash
pio run --target upload
pio device monitor
```

Make sure your wiring matches the README in the original [LaserToMap360 repo](https://github.com/Herobrine-Pixel/LaserToMap360).

## 🔗 Dependencies
- VL53L0X by Pololu
- AccelStepper by Mike McCauley
