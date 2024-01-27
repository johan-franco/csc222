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


