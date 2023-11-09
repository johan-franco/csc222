#include "test.h"


UnoC::UnoC (){
	color = RED;
	type = ONE;
}

UnoC::UnoC( Color c, Type t) {
	color = c;
	type = t;
}

bool UnoC::equals(UnoC& topCard) {
	return (color == topCard.color || type == topCard.type);
}
string UnoC::to_string() {
    vector<string> colors = {"Red", "Yellow", "Blue", "Green"};
    vector<string> types = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "Skip"};

    return colors[color] + " " + types[type];
}

vector<UnoC> build_deck()
{
    vector<UnoC> deck(88);
    int i = 0;
    for (Color col = RED; col <= GREEN; col = Color(col+1)) {
        for (Type typ = ZERO; typ <= SKIP; typ = Type(typ+1)) {
            deck[i].color = col;
            deck[i].type = typ;
            i++;
        }
    }
    return deck;
}

void draw_card(vector<UnoC>& hand, vector<UnoC>& deck){
    hand.push_back(deck[0]);
    deck.erase(deck.begin());
}

UnoC draw_card(vector<UnoC>& deck){
    UnoC temp = deck[0];
    deck.erase(deck.begin());
    return temp;
}

void play(vector<UnoC>& origDeck, int num, vector<UnoC>& playDeck){
    playDeck.push_back(origDeck[num]);
    origDeck.erase(origDeck.begin() +num);
}

bool is_valid(UnoC play, UnoC played){
    if (play.color == played.color || play.type == played.type){
        return true;
    }
    return false;
}

int myrandom (int i) {
    srand (time(NULL));
    return rand()%i;
}

void computerTurn(vector<UnoC>& computerHand, vector<UnoC>& discard, vector<UnoC>& deck){
    for (int i = 0; i < computerHand.size(); i++){
        if (is_valid(computerHand[i], discard.back())){
            //topCard = draw_card(computerHand);
            play(computerHand, i, discard);
            return;
        }
    }
    draw_card(computerHand, deck);
    while (!is_valid(computerHand.back(), discard.back())){
        draw_card(computerHand, deck);
    }
    //topCard = draw_card(computerHand)
    play(computerHand, computerHand.size()-1, discard);
}
