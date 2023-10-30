#include <iostream>
#include <cmath>

using namespace std;

struct Fraction {
    int numerator, denominator;

    Fraction(int n, int d);

    string To_String();
};

Fraction::Fraction( int n, int d){
    numerator = n, denominator = d;
    cout << "Set with both numerator and denominator" << endl;
}

string Fraction :: To_String() {
    if  (denominator == 1) {
        return to_string(numerator);
    }
    return to_string(numerator) + "/" + to_string(denominator);
}
int main() {
    Fraction p(4,5);

    cout << p.To_String();
    return 0;
}