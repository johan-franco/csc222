#include <iostream>
#include <cmath>
using namespace std;

double distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    double dsquared = dx * dx + dy * dy;
    double result = sqrt(dsquared);
    return result;
}
int main() {
    //6, 8 10 triangle, result should be 10
    double dist = distance(3.0, 2.0, 9.0, 10.0);
    cout << "dist is: " << dist << endl;
}
