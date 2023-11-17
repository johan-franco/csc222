#include <vector>
#include "card.h"

struct Card;

struct Deck {
    vector<Card> cards;

    Deck();

    Deck(int size);
    int find( Card& card);
    void swap(int index_card, int index_card2);

};
