#include "deck.h"

int Deck::find(const Card& card) 
{
    for (int i = 0; i < *this->cards.size(); i++) {
        if (card.equals(*this->cards[i])) return i;
    }
    return -1;
}

Deck :: Deck() {    
        vector<Card> temp(52);
        cards = temp;
        int i = 0;
        for (Suit suit = CLUBS; suit <= SPADES; suit = Suit(suit+1)) {
            for (Rank rank = ACE; rank <= KING; rank = Rank(rank+1)) {
                cards[i].suit = suit;
                cards[i].rank = rank;
                i++;
            }
        }
    }
Deck :: Deck(int){
    vector<Card> temp(size);
    cards = temp;
}

int main() {
    

    return 0;
}