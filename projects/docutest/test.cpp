#include "test.h"

UnoC::UnoC (){
	color = RED;
	type = ONE;
}

UnoC::UnoC( Color c, Type t) {
	color = c;
	type = t;
}

bool UnoC::equals(UnoC& topCard) {
	return (color == topCard.color || type == topCard.type);
}