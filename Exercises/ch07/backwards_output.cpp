#include <iostream>
#include <string>
using namespace std;

void backwards(string p){
    int x = 0;
    while (x <= p.length()) {
        int pran = p.length() - x;
        char letter = p[pran];
        cout << letter;
        x = x + 1;
    }

}

int main()
{
    backwards("race");
    
}