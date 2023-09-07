#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    int range = 11;
    for(int i = 0; i < 10; i++) {
        int d = rand()%range;
        int m = rand()%range;
        
        cout << "The product of " << d << " and " << m << " is " << d*m << "." << endl;
    }
}