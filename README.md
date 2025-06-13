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
Created by **Herobrine Sah**  
GitHub: [Herobrine Pixel](https://github.com/Herobrine-Pixel)

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
