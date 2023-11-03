#include "deck.h"

int Deck::find(const Card& card) 
{
    for (int i = 0; i < *this->cards.size(); i++) {
        if (card.equals(*this->cards[i])) return i;
    }
    return -1;
}


int main() {
    

    return 0;
}