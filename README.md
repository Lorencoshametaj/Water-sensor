# Water Level Monitoring with Arduino and Real-Time Graph

This project monitors the water level using an Arduino and a water level sensor, and visualizes the data in real-time on a web page. A dynamic graph updates every second, showing the current water level, providing a clear visual representation of the data collected from the sensor.

## Features

- **Real-time water level monitoring**: Continuously displays sensor data in a live-updating graph on a web page.
- **Responsive chart**: The chart updates every second, providing near real-time data feedback.
- **Simple setup**: Easy-to-follow Arduino code and web page.
- **Browser-Arduino communication**: Uses the Web Serial API to communicate directly between the browser and the Arduino.

## Technologies Used

- **Arduino**: To interface with the water level sensor.
- **HTML/CSS/JavaScript**: For building the web interface and graph.
- **Chart.js**: To visualize the water level data in a dynamic graph.
- **Web Serial API**: Enables communication between the browser and the Arduino via a serial connection.

## Hardware Requirements

- Arduino board (e.g., Arduino Uno)
- Water level sensor
- LEDs (optional, for visual feedback)
- BJT NPN
- USB cable to connect Arduino to your computer

## Software Requirements

- Arduino IDE to upload the sketch to your board.
- A web browser that supports the Web Serial API (e.g., Chrome).
- Git (optional, for version control).

## How to Use

### Step 1: Upload the Arduino Code

1. Connect the water level sensor to your Arduino board.
2. Upload the Arduino sketch from `water_level` to your Arduino.
3. The Arduino will start sending water level data through the serial connection.

### Step 2: Run the Web Interface

1. Open the `Page.html` file in a Web Serial API-compatible browser (Chrome or Edge).
2. Click "Connect to Arduino" on the web page.
3. The real-time graph will start updating, showing the water level data from the sensor.

### Step 3: Observe the Graph

- The chart will update every second with new data.
- The data will be displayed as a time series with the water level on the Y-axis and time in seconds on the X-axis.

## Project Setup

### Wiring Diagram

Provide a basic diagram or textual description of how to wire the sensor to the Arduino.

- **Water level sensor pin** → A5 on Arduino
- **LEDs**: Red (pin 10), Green (pin 9), Yellow (pin 8)
- **Enable pin**: Pin 7

### Arduino Sketch

Provide the code snippet or the file location for the Arduino sketch. You can reference your `.ino` file here.

### HTML/JavaScript Code

Provide instructions on how to customize or modify the HTML and JavaScript files for the web interface.

## Contributing

Feel free to fork this repository, submit issues, and make pull requests. Contributions are welcome!

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
