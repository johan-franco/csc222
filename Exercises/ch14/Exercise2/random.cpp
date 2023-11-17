#include "random.h"
int random_between(int l, int h) {
    int range = h - l;
    if (h <0 ||  l < 0 || h <=l  )  {
        return -1;
    }
    int full_num = RAND_MAX%range + l;
    
    return full_num;
}