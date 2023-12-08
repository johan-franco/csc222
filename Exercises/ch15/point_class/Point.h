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

    double get_x() const;
    double get_y() const;
    double get_dist();

    void calc_dist();
    string to_string();
    double distance(const Point&p2);

    Point operator + (const Point& p);
    Point operator - (const Point& p);
    friend Point operator * (int i, const Point& p);

    friend ostream &operator<<(ostream &os, const Point &c);
};