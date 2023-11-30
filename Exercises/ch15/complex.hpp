#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#pragma once

using namespace std;
class Complex {
    double real, imag;
    double mag, theta;
    bool polar;

    public:
    Complex();
    Complex(double r,double i);

    void calculate_polar();

    double get_real(); 
    double get_imag();
    double get_mag();
    double get_theta();

    string str_cartesian(){
        return to_string(get_real()) + " + " + to_string(get_imag()) + "i";
    }

    string str_polar(){
        string theta = to_string(get_theta());
        string mag = to_string(get_mag());
        return mag  + "e^" + theta + "i";
    }
    Complex abs(){
        return Complex( ::abs(real), ::abs(imag));
    }
    Complex operator + (const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }
    Complex operator - (const Complex& c){
        return Complex(real - c.real, imag - c.imag);
    }
    Complex operator / (const Complex& c){
        return Complex(real / c.real, imag / c.imag);
    }
};