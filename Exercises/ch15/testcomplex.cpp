#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "complex.hpp"
using namespace std;

TEST_CASE("Test can create and render a Complex number") {
    Complex c1;
    CHECK(c1.str_cartesian() == "0.000000 + 0.000000i");
    Complex c2(2, 3);
    CHECK(c2.str_cartesian() == "2.000000 + 3.000000i");
    CHECK(c2.str_polar() == "3.605551e^0.982794i");
    Complex c3(1, 0.8, POLAR);
    CHECK(c3.str_polar() == "1.000000e^0.800000i");
}

TEST_CASE("Test can add Complex numbers with +") {
    Complex c1(2, 3);
    Complex c2(4, 7);
    Complex sum = c1 + c2; 
    CHECK(sum.str_cartesian() == "6.000000 + 10.000000i");
}

TEST_CASE("Test can subtract Complex numbers with -") {
    Complex c1(2, 3);
    Complex c2(4, 7);
    Complex diff = c1 - c2; 
    CHECK(diff.str_cartesian() == "-2.000000 + -4.000000i");
}

TEST_CASE("Test can multiply Complex numbers with *") {
    Complex c1(8.0,14.0, POLAR);
    Complex c2(5.0,40.0, POLAR);
    Complex c3 = c1 * c2;
    CHECK(c3.str_polar() == "40.000000e^54.000000i");
}

TEST_CASE("Test can divide Complex numbers with /") {

}

TEST_CASE("Test abs of Complex number") {
    Complex c(3, 4);
    CHECK(c.abs() == 5.000000);
}
TEST_CASE("Test << of Complex number") {
    Complex c(3, 4);
    string s;
}