#include "mines.hpp"

Boxes::Boxes(int x, int y, bool m) {
    xmin = x * 50;
    xmax = xmin + 49;

    ymin = y * 50;
    ymax = ymin + 49;

    mine = m;
}

 void Boxes::toString(){
    cout<< "The range for x is " << xmin<< '-' << xmax << ". The range for y is" << ymin << '-' << ymax;
}
int Grid::check_mines(){
    int mines = 0; 
    for(int i = 0; i < map.size();i++){
        if (map[i].mine == true) {
            mines++;
        }
    }
    return mines;
}



int Grid::find_box(int x, int y){
    Boxes p = map[0];
    for(int i = 0; i < map.size();i++){
        if (map[i].xmin < x && x < map[i].xmax && map[i].ymin < y && y< map[i].ymax) {
           p = map[i];
           return i;
        }
    }
    
}

bool Grid::hasMine( int x, int y) {
    if (x >= 0 && x < 16 && y >= 0 && y < 16) {
        int location = y * 16 + x;
        return map[location].mine;
    }
    return false;
}

int Grid::countSurroundingMines( int x, int y) {
    int count = 0;
    for (int i = -1; i <= 1; ++i) {
        for (int j = -1; j <= 1; ++j) {
            if (i == 0 && j == 0) continue; 
            int newX = x + i;
            int newY = y + j;

            if (newX >= 0 && newX < 16 && newY >= 0 && newY < 16) {
                int location = newY * 16 + newX;
                if (map[location].mine) {
                    ++count;
                }
            }
        }
    }
    return count;
}


