#include <Motor_Simple.h>


// pin ena && pin enb
int pin_ena;
int pin_enb;

// motor A
int pin_1;
int pin_2;

// motor B
int pin_3;
int pin_4;


void motorbegin(int pin1, int pin2, int pin3, int pin4) {

    // motor A
    pinMode(pin_1, OUTPUT);
    pinMode(pin_2, OUTPUT);

    // motor B
    pinMode(pin_3, OUTPUT);
    pinMode(pin_4, OUTPUT);

    pin_1 = pin1;
    pin_2 = pin2;
    pin_3 = pin3;
    pin_4 = pin4;
}

void pwmbegin(int ena, int enb) {

    pinMode(pin_ena, OUTPUT);
    pinMode(pin_enb, OUTPUT);

    pin_ena = ena;
    pin_enb = enb;
}

void motor_right(int n) {

    if (n == 1)
    {
        digitalWrite(pin_4, LOW);
    }
    else if (n == 0)
    {
        digitalWrite(pin_4, HIGH);
    }

    digitalWrite(pin_3, n);

}

void motor_left(int n) {

    if (n == 1)
    {
        digitalWrite(pin_2, LOW);
    }
    else if (n == 0)
    {
        digitalWrite(pin_2, HIGH);
    }
    
    digitalWrite(pin_1, n);
}

void motor_stop() {

    // motor A
    digitalWrite(pin_1, LOW);
    digitalWrite(pin_2, LOW);

    // motor B
    digitalWrite(pin_3, LOW);
    digitalWrite(pin_4, LOW);
}

void motor_up() {

    // motor A
    digitalWrite(pin_1, HIGH);
    digitalWrite(pin_2, LOW);

    // motor B
    digitalWrite(pin_3, HIGH);
    digitalWrite(pin_4, LOW);
}

void motor_down() {

    // motor A
    digitalWrite(pin_1, LOW);
    digitalWrite(pin_2, HIGH);

    // motor B
    digitalWrite(pin_3, LOW);
    digitalWrite(pin_4, HIGH);
}

void pwmsetup(int pwm) {

    analogWrite(pin_ena, pwm);
    analogWrite(pin_enb, pwm);
}

void speed_max() {

    analogWrite(pin_ena, 255);
    analogWrite(pin_enb, 255);
}

void speed_min() {

    analogWrite(pin_ena, 0);
    analogWrite(pin_enb, 0);
}