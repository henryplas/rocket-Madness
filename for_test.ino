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
  servo_y.write(middle_y);
  delay(2000);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = max_right_x; i >= max_left_x; i -= 5)
  {
    servo_x.write(i);
    delay(100);
  }
  for(int i = max_left_x; i <= max_right_x; i += 5)
  {
    servo_x.write(i);
    delay(100);
  }
  
  
}
