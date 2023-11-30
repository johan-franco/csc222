#include <iostream>
#include <string>
#include <vector>
#pragma once

using namespace std;
class Complex {
    double real, imag;
    double mag, theta;
    bool polar;

    public:
    Complex() {real = 0; imag = 0; polar = false;}
    Complex(double r,double i) {real = r; imag = i; polar = false;}

    void Complex::calculate_polar(){
        mag = sqrt(real * real + imag * imag);
        theta = atan(imag / real);
        polar = true;
    }
    double Complex::get_real() {
        return real;
    }
    double Complex::get_imag() {
        return imag;
    }
    double Complex::get_mag() {
        if (polar = false) calculate_polar();
        return mag;
    }
    double Complex::get_theta() {
        if (polar = false) calculate_polar();
        return theta;
    }
};