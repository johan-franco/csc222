#include "card.h"
#include "deck.h"
#include <iostream>
using namespace std;

int main() {
    Card mycard(SPADES, ACE);
    Deck mydeck;
    mydeck.swap(1 , 4);
    return 0;
}
