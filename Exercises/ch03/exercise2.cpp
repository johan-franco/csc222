#include <iostream>
using namespace std;

void print_twice(char phil) {
    cout << phil << phil << endl;
}

int main() {
    double x = 6;
    print_twice('tryme');
    print_twice(3);
    print_twice(x);
    return 0;
}