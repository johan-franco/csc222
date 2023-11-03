#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "test.h"
using namespace std;

TEST_CASE("Test can create and render MyObject") {
    Obj myobj;
    CHECK(myobj.to_string() == "This is Object");
} 
