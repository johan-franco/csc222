#include <iostream>
using namespace std;
int main(){
    double x = 1.0;
    int count = 0;
    while (count < 17){
        cout << x << "\t" << log(x) / log(2.0) << endl;
        x = x * 2.0;
        count++;
}
}