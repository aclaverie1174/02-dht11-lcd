# DHT11 Temperature and Humidity Display

An Arduino Uno project that reads temperature and humidity from a DHT11 sensor and shows the values on a 16x2 LCD and in the Serial Monitor.

<img width="3840" height="5120" alt="Temp and humidity sensor 1" src="https://github.com/user-attachments/assets/687ac780-f485-4736-b4d8-7112a7625357" />
<img width="768" height="1024" alt="Temp and humidity sensor 2" src="https://github.com/user-attachments/assets/c27f74d5-2b88-4e74-b1c1-7f0bdf351b1f" />
<img width="768" height="1024" alt="Temp and humidity sensor 3" src="https://github.com/user-attachments/assets/1ae569e8-76b3-4544-9b3c-44d875effd2a" />


## Parts

- Arduino Uno R3
- DHT11 sensor module
- LCD1602 display
- Potentiometer (LCD contrast)
- Breadboard and jumper wires

## Wiring

| DHT11 | Uno |
|---|---|
| S (signal) | Pin 2 |
| + | 5V |
| - | GND |

LCD1602 pins: 7,8,9,10,11,12

## Setup

1. Install the **DHT sensor library** (Adafruit) and **Adafruit Unified Sensor** from the Arduino Library Manager.
2. Upload the sketch to the Uno.
3. Open the Serial Monitor at 9600 baud.

## How it works

The sketch reads the DHT11 every 2 seconds and shows temperature (C and F) and humidity on the LCD and over serial. If a read fails, it shows an error message instead.
