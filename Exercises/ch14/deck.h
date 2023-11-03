#include "card.h"
#include <vector>

struct Deck {
    vector<Card> cards;

    Deck(){    
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

    Deck(int size) {
    vector<Card> temp(size);
    cards = temp;
}
    int find(const Card& card);
};

