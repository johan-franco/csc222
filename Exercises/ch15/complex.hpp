#include <iostream>
#include <string>
#include <math.h>
#include <assert.h>
using namespace std;


enum Flag {POLAR};

class Complex
{
    double real, imag;
    double mag, theta;
    bool polar;

    void calculate_polar();
    void calculate_cartesian();

public:
    Complex();
    Complex(double r, double i);
    Complex(double m, double t, Flag);


    double get_real();
    double get_imag();
    double get_mag();
    double get_theta();

    Complex operator + (const Complex& c);
    Complex operator - (const Complex& c);
    Complex operator * (Complex& c);
    Complex operator / (const Complex& c);
    string str_cartesian();
    string str_polar();
    double abs();
};