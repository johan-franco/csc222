#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "point.hpp"
using namespace std;

TEST_CASE("Test can add Point numbers with +") {
    Point p1(2, 3);
    Point p2(4, 7);
    Point sum = p1 + p2; 
    CHECK(sum.tostring() == "(6.000000,10.000000)");
}
TEST_CASE("Test can subtract Point numbers with +") {
    Point p1(2, 3);
    Point p2(4, 7);
    Point difference = p2 - p1; 
    CHECK(difference.tostring() == "(2.000000,4.000000)");
}

