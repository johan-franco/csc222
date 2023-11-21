#include "card.h"
#include <iostream>
using namespace std;

int main() {
    Card mycard(SPADES, ACE);
    Deck mydeck;
    cout << mydeck.cards[3].rank << ' ' << mydeck.cards[3].suit ;
    return 0;
}