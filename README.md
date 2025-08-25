# Touchless_4-Channel_Switchboard
Control up to four devices with a simple wave of your hand using Arduino and HC-SR04 ultrasonic sensors.

This project is an Arduino-based touchless switchboard that uses four HC-SR04 ultrasonic sensors to independently control four relays. It allows a user to toggle connected devices on or off by waving a hand in front of a sensor, providing a modern and hygienic alternative to a physical switch panel.

Features:
This project's key features include touchless control for up to four independent channels, providing a sanitary way to operate devices without physical contact. It uses a toggle functionality, meaning each wave of the hand flips the corresponding relay's state from ON to OFF, or vice-versa. The system is simple and standalone, as the code uses standard Arduino functions and does not require any external libraries. For easy troubleshooting, it also provides debug output to the Serial Monitor, showing the real-time distance and relay status for each channel.

Hardware Requirements:
To build this project, you will need an Arduino UNO or any compatible board, four HC-SR04 ultrasonic sensors, and four 5V relay modules. You will also need the necessary jumper wires to connect all the components and a suitable power supply for the Arduino and the relays.

Getting Started:
Follow these instructions to assemble and run the project.

1. Wiring:
The wiring for this project involves connecting each of the four sensors and relays to the Arduino. For the first switch, connect the sensor's trigPin to Arduino Pin 13, the echoPin to Pin 12, and the relay control pin to Pin 5. For the second switch, connect the trigPin to Pin 7, the echoPin to Pin 6, and the relay to Pin 4. For the third switch, the trigPin connects to Pin 9, the echoPin to Pin 8, and the relay to Pin 3. Finally, for the fourth switch, connect the trigPin to Pin 11, the echoPin to Pin 10, and the relay to Pin 2.

2. Installation:
The installation process begins by connecting the Arduino to your computer. Once connected, open the Arduino IDE and copy the entire sketch for the touchless switchboard, pasting it into the editor. From the Tools menu, ensure you have selected the correct Board and Port corresponding to your Arduino. Finally, click the Upload button to transfer the code to the board. You can then power the device and open the Serial Monitor to see the debug output.

How It Works:
The system operates in a continuous loop that cycles through each of the four sensor and relay pairs. For each sensor, the Arduino initiates a measurement by sending a short pulse to the trigPin and then listens for the reflected pulse on the echoPin. The code calculates the distance in centimeters based on the echo's return time. If this distance is 5 cm or less, it registers a detection. The toggle logic ensures the relay only flips on the initial detection by comparing the current SwitchState to the lastSwitchState. If a valid trigger is confirmed, the corresponding RelayState is inverted, and the new state is written to the relay pin to turn the connected device on or off.

License:
This project is open source. Feel free to use, modify, and distribute it.
