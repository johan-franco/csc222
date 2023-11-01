#include <iostream>

struct Card
{
    enum Suit {CLUBS, DIAMONDS, HEARTS, SPADES};
    enum Rank {ACE=1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT,
           NINE, TEN, JACK, QUEEN, KING};
    Rank rank;
    Suit suit;

    Card(Suit s, Rank r);
};

struct Deck {
    vector<Card> cards;

    Deck(int n);
};

