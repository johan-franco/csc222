#include "Fraction.h"
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
    numerator = numerator + add;
}
double Fraction::convert_denom(double mod){
    mod = mod/denominator; 
    return mod;
}
int main () {
    Fraction p;
    p.print();
    p.plus(4);
    p.print();
}

