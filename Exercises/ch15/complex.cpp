#include "complex.hpp"
#include <assert.h>

Complex::Complex() {
    real = 0; imag = 0; polar = false;
}
Complex::Complex(double r, double i) {
    real = r; imag = i; polar = false;
}
Complex::Complex(double m, double t, Flag) {
    mag = m; theta = t;
    polar = true;
    calculate_cartesian();
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
void Complex::calculate_cartesian(){
    assert(polar == true);
    real = mag*cos(theta);
    imag = mag*sin(theta);
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

double Complex::abs()
{
    if (polar == false) calculate_polar();
    return mag;
}
Complex Complex::operator + (const Complex& c) {
    return Complex(real + c.real, imag + c.imag);
}
Complex Complex::operator - (const Complex& c){
    return Complex(real - c.real, imag - c.imag);
}
Complex Complex::operator / ( Complex& c){
    if (polar == false){ 
        calculate_polar();}
    if (c.polar == false){
        c.calculate_polar();}
    return Complex(mag / c.mag, theta- c.theta, POLAR);
}
Complex Complex::operator*(Complex &mult) {
  if (polar == false){
    calculate_polar();}
  if (mult.polar == false){
    mult.calculate_polar();}
  return Complex(mag * mult.mag, theta + mult.theta, POLAR);
}
ostream &operator<<(ostream& os,  const Complex& comp)
{
    os << "The complex number is: " << comp.real<< " + " << comp.imag <<'i';
    return os;
}