#include <iostream>
#include <string>
using namespace std;

enum Color {RED, BLUE, YELLOW, GREEN};
enum Type {ONE=1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT,
           NINE, REVERSE, SKIP};

struct UnoC {
	Color color;
	Type type; 


	UnoC();
	UnoC(Color c, Type t);
	bool equals(UnoC& topCard);
};
