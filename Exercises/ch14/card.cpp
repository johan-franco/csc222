#include "card.h"


Card::Card() {
    suit = SPADES;
    rank = ACE;
}

Card::Card(Suit s, Rank r) {
    suit = s;
    rank = r;
}

bool Card::equals(Card& c2) {
    return (rank == c2.rank && suit == c2.suit);
}

