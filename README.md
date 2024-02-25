# Aquarium cooling system
## Overview
This repository contains the Arduino code and circuit diagram for an automated aquarium cooling system designed specifically for maintaining optimal conditions for cold water animals. 
The project integrates an aquatic temperature probe that triggers a fan to cool the water once it exceeds a predetermined temperature threshold. Real-time temperature readings in Fahrenheit and the current fan status are displayed on a screen for easy monitoring.
![alt text](https://github.com/2omethingBaD/Aquarium-fan/blob/main/img/20240225_141511.jpg?raw=true)

## Project Evolution
### Initial Setup(Testing)
The initial phase involved setting up the circuit on a breadboard for testing purposes, initially without the fan connected to the 5V relay.
![alt text](https://github.com/2omethingBaD/Aquarium-fan/blob/main/img/20240105_173439.jpg?raw=true)
Subsequently, the temperature probe was submerged in a container of cold water to evaluate fan control. Following successful testing, the fan and power supply were integrated for comprehensive testing.
![alt text](https://github.com/2omethingBaD/Aquarium-fan/blob/main/img/20240105_173659.jpg?raw=true)
![alt text](https://github.com/2omethingBaD/Aquarium-fan/blob/main/img/20240105_211416.jpg?raw=true)

### Circuit Details
The circuit operates on a 12V DC power supply and comprises key components including a TISEKER Mini Nano V3.0 ATmega328P Microcontroller Board, a DS18B20 Temperature Sensor, and a 0.96-inch OLED display for visual feedback.
![alt text](https://github.com/2omethingBaD/Aquarium-fan/blob/main/img/Capture.PNG?raw=true)

## Completion and Deployment
### Integration with axolotl tank
The fan was strategically positioned above the tank with the outlet directed towards the water surface. Although a temporary setup was initially implemented, plans for a custom housing are underway to ensure long-term stability and functionality.
![alt text](https://github.com/2omethingBaD/Aquarium-fan/blob/main/img/20240225_141511.jpg?raw=true)
![alt text](https://github.com/2omethingBaD/Aquarium-fan/blob/main/img/20240225_141517.jpg?raw=true)
![alt text](https://github.com/2omethingBaD/Aquarium-fan/blob/main/img/20240225_141527.jpg?raw=true)
To ensure the most accurate temperature readings, the temperature probe was carefully positioned at the bottom of the tank, enabling precise monitoring and control.
![alt text](https://github.com/2omethingBaD/Aquarium-fan/blob/main/img/20240225_141535.jpg?raw=true)
