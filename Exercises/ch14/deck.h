#include <vector>
#include "card.h"

struct Deck {
    vector<Card> cards;

    Deck();

    Deck(int size);

    int find(const Card& card);
};
