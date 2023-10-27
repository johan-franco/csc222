#include "Fraction.h"
#include <cmath>
using namespace std;

Fraction::Fraction() {
    cout << "set with zero parameters" << endl;
    denominator = 1;
    numerator = 0;
}

Fraction::Fraction( int n, int d){
    numerator = n, denominator = d;
    cout << "Set with both numerator and denominator" << endl;
}

void Fraction::print(){
    Fraction fraction = *this;
    cout << "Numerator of Function: " << fraction.numerator << endl << "Denominator of Function: " << fraction.denominator << endl;
}

void Fraction:: plus(double add) {
    Fraction fraction = *this;
    add = fraction.convert_denom(add);
    add = numerator + add;
    cout << "Result of addition is: " << add/denominator << endl;
    numerator = ceil(add);
    fraction.simplify();
}

void Fraction:: minus(double sub) {
    Fraction fraction = *this;
    sub = fraction.convert_denom(sub);
    sub = numerator - sub;
    cout << "Result of subtraction is: " << sub/denominator << endl;
    numerator = ceil(sub);
    fraction.simplify();
}

double Fraction::convert_denom(double mod){
    mod = mod*denominator; 
    return mod;
}

void Fraction:: times(double mult) {
    Fraction fraction = *this;
    mult = mult * numerator;
    cout << "Result of multiplication is: " << mult/denominator << endl;
    numerator = ceil(mult);
    fraction.simplify();
}

void Fraction:: divided_by(double div) {
    Fraction fraction = *this;
    div = div * denominator;
    
    cout << "Result of division is: " << numerator/div << endl;
    denominator = ceil(div);
    fraction.simplify();
}

void Fraction:: simplify() {
    int min;
    min = (numerator <= denominator)  ? min = numerator : min = denominator;
    for(int i = min; i > 0; i--) {
        if (numerator%i == 0 && denominator%i  == 0) {
            numerator = numerator/i;
            denominator = denominator/i; 
        }
    }
}

int main () {
    Fraction p(4,5);
    p.print();
    p.divided_by(4.75);
    p.print();
}

