#include "random.h"
int main() {
    cout << "Random Num"<< random_between(5,7) << endl;
    //Should return -1:
    cout << "Random Num"<<random_between(5,5) << endl;
    cout << "Random Num"<< random_between(-1, 1) << endl;
    cout << "Random Num"<< random_between( -1, -2) << endl;
    cout << "Random Num"<< random_between(30, 1) << endl;
}