#include <iostream>
#include <string>
#include <list>
using namespace std;

void drink_calc() {
    int drinks_amount, x;
    list<int> ounces = {};
    cout << "How many glasses are there?:" ;
    cin >> drinks_amount;
    for (int i = 1; i <= drinks_amount; i++) {
        cout << "How many oz in glass " << i;
        cin >> x;
        ounces.assign(1,x);
    }
    cout << ounces;
}

int main(){
    drink_calc();
}