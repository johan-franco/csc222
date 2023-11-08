#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "test.h"
using namespace std;

TEST_CASE("Test can create and render MyObject") {
    UnoC topCard;
    UnoC Match_Color(RED, REVERSE);
    UnoC Match_Type(GREEN, ONE);
    CHECK(Match_Color.equals(topCard) == true);
    CHECK(Match_Type.equals(topCard) == true);
} 
