#include "random.h"
int random_between(int l, int h) {

    int range = h - l;
    int full_num = RAND_MAX%range + l;
}