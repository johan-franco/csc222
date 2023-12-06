#include <iostream>
#include <string>
#include <math.h>
#include <assert.h>
using namespace std;

class Point {
    double x, y;
    double mag;

public:
    Point();
    Point(double cordx,double cordy);

    double get_x();
    double get_y();
    double get_mag();

    string tostring();

    Point operator + (const Point& c);
    Point operator - (const Point& );

    friend ostream &operator<<(ostream &os, const Point &c);
};