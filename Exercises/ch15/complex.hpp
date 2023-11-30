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
    string Complex::str_cartesian(){
        return to_string(get_real()) + " + " + to_string(get_imag()) + "i";
    }

    string Complex::str_polar(){
        string theta = to_string(get_theta());
        string mag = to_string(get_mag());
        return mag  + "e^" + theta + "i";
    }
    Complex Complex::operator + (const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex Complex::operator - (const Complex& c){
        return Complex(real - c.real, imag - c.imag);
    }
    Complex Complex::operator / (const Complex& c){
        return Complex(real / c.real, imag / c.imag);
    }
};