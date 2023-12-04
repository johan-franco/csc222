#include "complex.hpp"

Complex::Complex() {
    real = 0; imag = 0; polar = false;
}
Complex::Complex(double r,double i) {
    real = r; imag = i; polar = false;
}
Complex::Complex(double m, double t, Flag) {
    mag = m; theta = t;
    polar = true;
}
double Complex::get_real() {
    return real;
}
double Complex::get_imag() {
    return imag;
}
void Complex::calculate_polar(){
    mag = sqrt(real * real + imag * imag);
    theta = atan(imag / real);
    polar = true;
}
double Complex::get_mag() {
    if (polar == false) calculate_polar();
    return mag;
}
double Complex::get_theta() {
    if (polar == false) calculate_polar();
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

void Complex::abs(){
    if (polar == false) calculate_polar();
    real = ::abs(real);
    imag = ::abs(imag);
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