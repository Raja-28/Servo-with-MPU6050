## Servo Control with MPU6050

## Overview

This project demonstrates how to control a servo motor using the MPU6050 sensor with an Arduino. The MPU6050 sensor measures the tilt angle and uses this data to control the position of a servo motor. The servo motor responds by rotating to match the tilt of the sensor, making it a useful project for understanding motion control and stabilization.

## Components Used
- Arduino Uno
- MPU6050 Accelerometer & Gyroscope Sensor
- Servo Motor
- Breadboard
- Jumper Wires
  
## Wiring

- **MPU6050 Sensor**: 
  - `VCC` -> 3.3V
  - `GND` -> GND
  - `SCL` -> A5 (SCL)
  - `SDA` -> A4 (SDA)

- **Servo Motor**:
  - `VCC` -> 5V
  - `GND` -> GND
  - `Signal` -> Pin 9 (or any PWM pin)

- **Power Supply**: Ensure proper power is supplied to the Arduino and Servo motor.

## How It Works

1. The MPU6050 sensor continuously measures the tilt along the Y-axis.
2. The Y-axis data is read by the Arduino and mapped to an angle value between 0 and 180 degrees.
3. This mapped value is used to control the rotation of the servo motor.
4. The servo motor's position is updated based on the tilt of the MPU6050.

## Code Explanation

- The **`MPU6050`** library is used to interface with the sensor.
- The **`Servo`** library controls the position of the servo motor.
- The tilt angle measured by the MPU6050 is mapped to the range of 0° to 180°, which corresponds to the range of the servo motor's rotation.
- The code smooths the servo's movements by introducing a small delay in the loop.

## Setup Instructions

1. Connect the MPU6050 sensor and servo motor to the Arduino according to the wiring diagram.
2. Upload the provided code to the Arduino using the Arduino IDE.
3. Open the Serial Monitor to view the tilt angle in real-time.

## Libraries Required

- **MPU6050** library: This library helps to communicate with the MPU6050 sensor. Install it from the Arduino Library Manager.
- **Servo** library: Used for controlling the servo motor.

## Customization

- You can adjust the minAngle and maxAngle values to change the range of the servo movement.
- If you want to control other axes (like the X-axis), simply modify the axis value read from the MPU6050 and map it to the servo motor.

## Application Ideas

- Gimbal Control: You can use this concept to build a basic gimbal for cameras or other devices.
- Tilt-based Control Systems: Apply this system to control other devices that rely on tilt, such as a robotic arm or drone stabilizers.

## License

This project is open-source and licensed under the MIT License.
