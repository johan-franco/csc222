#include <iostream>
#include <string>
#include <math.h>
#include <assert.h>
using namespace std;

class Point {
    double x, y;
    double dist;

public:
    Point();
    Point(double cordx,double cordy);

    double get_x();
    double get_y();
    double get_dist();

    void calc_dist();
    string tostring();

    Point operator + (const Point& p);
    Point operator - (const Point& p);

    friend ostream &operator<<(ostream &os, const Point &c);
};