#include <iostream>
using namespace std;

void countdown(int n) {
    if (n == 0) {
        cout << "Blastoff!" << endl;
    } else {
        cout << n << endl;
        countdown(n-1);
    }
}
int main()
{
    //progam will run infinitely as n is being subtracted by one continously, never reaching 0
    countdown(-5);
    return 0;
}