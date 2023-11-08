#include "deck.h"
Deck::Deck() {    
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
Deck::Deck(int size){
    vector<Card> temp(size);
    cards = temp;
}

int Deck::find(Card& card) 
{
    Deck p = *this;
    for (int i = 0; i < p.cards.size(); i++) {
        if (p.cards[i].equals(card)) return i;
    }
    return -1;
}