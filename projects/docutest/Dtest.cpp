#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include "test.h"
using namespace std;

TEST_CASE("Testing UnoC member functions and other necessary playing functions") {
    UnoC topCard;
    UnoC Match_Color(RED, NINE);
    UnoC Match_Type(GREEN, ONE);
    vector<UnoC> deck = build_deck();

    CHECK(Match_Color.equals(topCard) == true);
    CHECK(Match_Type.equals(topCard) == true);
    CHECK(Match_Color.to_string() == "Red Nine");
    CHECK(deck[0].color == RED);
    
    vector<UnoC> playerHand;
    for (int i = 0; i < 7; i++){
        playerHand.push_back(deck[0]);
        deck.erase(deck.begin());
    }

    vector<UnoC> discard;
    discard.push_back(draw_card(deck));
    /*build_deck() builds a static deck meaning we know that discard[0] is a red seven
    Using this we can check how well play() works*/
    CHECK(discard[0].type == SEVEN);
    play(playerHand,3, discard);
    //we discarded a red three
    cout<< discard.back().type <<endl;
    CHECK(discard.back().type == THREE);


} 
