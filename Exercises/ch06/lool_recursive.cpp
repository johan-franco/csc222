#include <iostream>
using namespace std;

void lool_forever(int n) {
    while (true) {
        cout << "n is now " << n << "." << endl;
        n = n + 1;
    }
}


int main() {
    lool_forever( 1);
}