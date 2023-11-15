#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "Uno.h"
using namespace std;

TEST_CASE("Testing UnoC member functions") {
    UnoC topCard;
    UnoC Match_Color(RED, NINE);
    UnoC Match_Type(GREEN, ONE);

    CHECK(Match_Color.equals(topCard) == true);
    CHECK(Match_Type.equals(topCard) == true);
    CHECK(Match_Color.to_string() == "Red 9");


} 

TEST_CASE("Testing regular functions used in game.cpp") {
    vector<UnoC> deck = build_deck();
    vector<UnoC> discard;

    vector<UnoC> playerHand;
    for (int i = 0; i < 7; i++){
        playerHand.push_back(deck[0]);
        deck.erase(deck.begin());
    }

    discard.push_back(draw_card(deck));
    /*build_deck() builds a static deck meaning we know that discard[0] is a red seven
    Using this we can check how well play() works*/
    CHECK(discard[0].type == SEVEN);
    play(playerHand,3, discard);
    //we discarded a red three (now it is in discard)
    cout<< discard.back().type <<endl;
    CHECK(discard.back().type == THREE);
}