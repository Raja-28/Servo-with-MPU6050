#include <Wire.h>
#include <Servo.h>
#include <MPU6050.h>

MPU6050 mpu;
Servo myServo; 

int servoPin = 9;  
int minAngle = 0;  
int maxAngle = 180;  

void setup() {
  Wire.begin();
  Serial.begin(9600);
  
  
  mpu.initialize();
  if (!mpu.testConnection()) {
    Serial.println("MPU6050 connection failed!");
    while (1); 
  }
  
  myServo.attach(servoPin);
  Serial.println("MPU6050 Initialized. Servo Ready.");
}

void loop() {
  int16_t ax, ay, az;
  mpu.getAcceleration(&ax, &ay, &az);


  int angle = map(ay, -17000, 17000, minAngle, maxAngle);
  angle = constrain(angle, minAngle, maxAngle);

  myServo.write(angle);
  Serial.print("Angle: ");
  Serial.println(angle);

  delay(20);
}
