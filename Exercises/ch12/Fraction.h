#include <iostream>

struct Fraction {
    int numerator, denominator;


    Fraction();
    Fraction(int n, int d);

    void print();
    double convert_denom(double mod);
    void plus(double add);
};