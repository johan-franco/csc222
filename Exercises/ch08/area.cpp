#include <iostream>
using namespace std;

struct Point {
    double x, y;
};

struct Rectangle {
    Point corner;
    double width, height;
};

double findArea(Rectangle p){
    double area;
    area = p.height * p.width;
    return area;
}

int main() {
    double my_rect_area;
    Rectangle my_rect = {{0.0, 0.0}, 100.0, 200.0};
    my_rect_area = findArea(my_rect);
    cout << "Area: " << my_rect_area;
    return 0;
}