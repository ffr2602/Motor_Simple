#ifndef Motor_Simple_h
#define Motor_Simple_h

#include <Arduino.h>

/*+++++++++++++++++ Data Variabel +++++++++++++++*/

#define MAX 255
#define MIN 0
#define go 1
#define back 0

/*+++++++++++++++++++++++++++++++++++++++++++++++*/
/*+++++++++++++++++++++++++++++++++++++++++++++++*/

/*++++++++++++++++++ KEYWORD ++++++++++++++++++++*/

void motorbegin(int pin1, int pin2, int pin3, int pin4);

/* motorbegin(); digunakan untuk inisialisasi pin motor */

void pwmbegin(int ena, int enb);

/* pwmbegin(); digunakan untuk inisialisasi pin pwm */

void motor_stop();

/* motor_stop(); digunakan menghentikan semua motor dari driver */

void motor_up();

/* motor_up(); digunakan untuk membuat motor berjalan ke depan */

void motor_right(int n);

/* motor_right(); digunakan untuk membuat motor berbelok ke kanan */

void motor_left(int n);

/* motor_left(); digunakan untuk membuat motor berbelok ke kiri */

void motor_down();

/* motor_down(); digunakan untuk membuat motor berjalan ke belakang */

void pwmsetup(int pwm);

/* pwmsetup(); digunakan untuk mengatur kecepatan motor */

void speed_max();
 
/* speed_max(); digunakan untuk membuat motor berjalan dengan kecepatan maximum */

void speed_min();

/* speed_min(); digunakan mengatur kecepatan motor awal */


#endif

