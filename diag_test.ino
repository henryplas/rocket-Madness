#include <ESP32Servo.h>

Servo servo_y;
Servo servo_x;

int delay_amt = 1000;

int middle_y = 90;
int max_left_y = 130;
int max_right_y = 40;

int middle_x = 100;
int max_left_x = 50;
int max_right_x = 140;

void setup() {
  // put your setup code here, to run once:

  servo_y.attach(13);
  servo_x.attach(12);
  servo_x.write(middle_x);
  delay(100);
  servo_y.write(middle_y);
  delay(2000);

}

void loop() {
  // put your main code here, to run repeatedly:
  servo_y.write(middle_y+35);
  servo_x.write(middle_x+35);
  delay(delay_amt);
  servo_y.write(middle_y-35);
  servo_x.write(middle_x+35);
  delay(delay_amt);
  servo_y.write(middle_y-35);
  servo_x.write(middle_x-35);
  delay(delay_amt);
  servo_y.write(middle_y+35);
  servo_x.write(middle_x-35);
  delay(delay_amt);
  
//  servo_y.write(max_right_y);
//  delay(delay_amt);
//  servo_y.write(middle_y);
//  delay(delay_amt);
//  servo_y.write(max_left_y);
//  delay(delay_amt);
//  servo_y.write(middle_y);
//  delay(delay_amt);
//
//  servo_x.write(max_right_x);
//  delay(delay_amt);
//  servo_x.write(middle_x);
//  delay(delay_amt);
//  servo_x.write(max_left_x);
//  delay(delay_amt);
//  servo_x.write(middle_x);
//  delay(delay_amt);

  
}
