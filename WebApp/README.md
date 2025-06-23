
# LaserToMap360 Web Viewer

Live 360° Lidar scan viewer using Web Serial API and Chart.js.

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
