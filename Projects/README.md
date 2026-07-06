______# Smart Environment Monitoring & Alert System

A microcontroller-based embedded system built using Arduino UNO that monitors 
temperature, humidity, distance, and light levels in real-time, displaying 
data on an LCD and triggering alerts via buzzer, relay, and LED.

## 🔧 Components Used
- Arduino UNO
- DHT22 (Temperature & Humidity Sensor)
- HC-SR04 (Ultrasonic Distance Sensor)
- 16x2 I2C LCD Display
- Relay Module
- LDR (Light Dependent Resistor)
- Buzzer
- LED

## ⚙️ Features
- Real-time temperature & humidity monitoring
- Obstacle/distance detection with buzzer alert
- Automatic relay/fan activation based on temperature threshold
- Light-based LED control (auto light in dark)
- Live data display on LCD

## 🛠️ Tools Used
- Arduino IDE
- Wokwi Simulator (for circuit simulation & testing)

## 📷 Circuit Diagram
(Insert Wokwi diagram screenshot here)

## 🚀 How It Works
1. DHT22 reads temperature and humidity
2. HC-SR04 measures distance continuously
3. LCD displays real-time sensor values
4. Buzzer triggers when an object is too close
5. Relay/fan turns on if temperature crosses threshold
6. LED turns on automatically in low light






## 📄 Code
See `./sketch.ino` for the complete Arduino code.

## 🔗 Simulation
Try it live on Wokwi: [Project Link](https://wokwi.com/projects/434081738389566465)



_____# Smart Knob Servo Controller

An Arduino-based project that uses a potentiometer to manually control a 
servo motor's angle in real-time, with visual (LED) and audio (buzzer) 
feedback.

## 🔧 Components Used
- Arduino UNO
- Potentiometer
- Servo Motor
- LED
- Speaker/Buzzer

## ⚙️ Features
- Smooth servo angle control via potentiometer input
- Real-time LED indication
- Audio feedback via speaker/buzzer

## 🛠️ Tools Used
- Arduino IDE
- Wokwi Simulator

## 🚀 How It Works
1. Potentiometer value is read via analog pin
2. Value is mapped to servo angle (0–180°)
3. Servo moves accordingly
4. LED and buzzer respond based on defined conditions

## 📄 Code
See `sketch.ino` for the complete Arduino code.

## 🔗 Simulation
Try it live on Wokwi: [Project Link]([your-wokwi-link-here](https://wokwi.com/projects/468789383729925121))
