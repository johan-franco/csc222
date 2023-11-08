#include <vector>
#include "card.h"

struct Card;

struct Deck {
    vector<Card> cards;

    Deck();

    Deck(int size);
    int find( Card& card);

};
