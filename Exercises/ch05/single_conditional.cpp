#include <iostream>
using namespace std;

void workingage(int age){
    if (age > 16 && age < 65) {
        cout << "age is within the normal working age." << endl;
    }

}

int main() {

    workingage(30);
    workingage(10);
    workingage(70);
}