#include <iostream>
using namespace std;

struct Point {
    double x, y;
};

struct Rectangle {
    Point corner;
    double width, height;
};

Point lower_right(Rectangle p){
    p.corner.x = p.corner.x + p.width;
    p.corner.y = p.corner.y - p.height;
    return p.corner;
}

int main() {
    Point my_rect_right_down_corner;
    Rectangle my_rect = {{0.0, 0.0}, 100.0, 200.0};
    my_rect_right_down_corner = lower_right(my_rect);
    cout << "Lower right corner: (" << my_rect_right_down_corner.x << ", " << my_rect_right_down_corner.y << ")";
    return 0;
}