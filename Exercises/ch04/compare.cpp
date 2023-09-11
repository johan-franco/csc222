#include <iostream>
using namespace std;

void compare(int a, int b) {
    if (a > b) {
        cout << "a is greater than b" << endl;
    }
    else if (a == b) {
        cout << "a and b are equal" << endl;
    }
    else {
        cout << "b is greater than a" << endl;
    }
}
int main()
{
    //progam will run infinitely as n is being subtracted by one continously, never reaching 0
    compare(3,3);
    return 0;
}