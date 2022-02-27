#include <Motor_Simple.h>

void setup() {
  
  motorbegin(6, 7, 8, 9);  // inisialisasi pin motor

  pwmbegin(10, 11); // inisialisasi pin pwm

  speed_min();

  motor_stop(); 
  
}

void loop() {

  // motor jalan ke depan

  speed_max();

  motor_up();
  delay(1000);

  motor_stop();
  delay(500);
  
  // motor jalan ke belakang

  motor_down();
  delay(1000);

  motor_stop();
  delay(500);
 
  // pengaturan kecepatan motor

  motor_up();

  for (int i = MIN; i <= MAX; i++)
  {
    pwmsetup(i);
    delay(20);
  }

  for (int j = MAX; j >= MIN; j--)
  {
    pwmsetup(j);
    delay(20);
  }

  motor_stop();
  delay(1000);
  
}