#include "mines.hpp"

Boxes::Boxes(int x, int y, bool m) {
    xmin = x * 50;
    xmax = xmin + 49;

    ymin = x * 50;
    ymax = ymin + 49;

    mine = m;
}

