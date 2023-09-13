#include <iostream>
#include <cmath>
using namespace std;

void overload_function(int a) {
    cout << "Overload function one, has one parameter that is a integer."<< endl;
}
void overload_function(double a) {
    cout << "Overload function two, has one parameter that is a double."<< endl;
}
void overload_function(int a, int b) {
    cout << "Overload function three, has two parameters that are both integers."<< endl;
}
void overload_function(int a, double b) {
    cout << "Overload function four, has two parameters, with the first being int and the second a double."<< endl;
}
void overload_function(double a, int b) {
    cout << "Overload function five, has two parameters, with the first being a double and the second int."<< endl;
}


int main() {
    overload_function(9);
    overload_function(10.0);
    overload_function(4, 4);
    overload_function(3, 5.0);
    overload_function(7.0, 10);
}
