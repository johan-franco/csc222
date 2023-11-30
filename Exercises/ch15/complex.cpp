#include "complex.hpp"

Complex::Complex() {
    real = 0; imag = 0; polar = false;
}
Complex::Complex(double r,double i) {
    real = r; imag = i; polar = false;
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

