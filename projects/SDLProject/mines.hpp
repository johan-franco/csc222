#include <iostream>
#include <string>
#include <math.h>
#include <assert.h>
using namespace std;

struct Boxes {
    int xmin;
    int xmax;

    int ymin;
    int ymax;

    bool mine;
    
    Boxes(int x, int y, bool m);
    void toString();
};

struct Grid {
    vector<Boxes> map;

    bool hasMine( int x, int y);

    int check_mines();
    int find_box(int x, int y);
    int countSurroundingMines( int x, int y);
};