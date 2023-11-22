#include <iostream>
#include <string>
#include <vector>
#pragma once

using namespace std;

enum Suit {CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {ACE=1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT,
           NINE, TEN, JACK, QUEEN, KING};



struct Card
{
    Rank rank;
    Suit suit;

    Card();
    Card(Suit s, Rank r);

    bool equals( Card& c2);
    string to_string();
};


struct Deck {
    vector<Card> cards;

    Deck();
    Deck(int size);

    int find(Card& card);
    void swap(int index_card, int index_card2);
    int find_lowest(int l, int h);
    void sortLH();
    Deck merge(const Deck& d) const;
    Deck merge_sort() const;
    void printDeck();
};
