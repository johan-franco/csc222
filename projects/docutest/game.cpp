#include "test.h"
#include <algorithm>
#include <random>

using namespace std;

int main(){

    vector<UnoC> deck = build_deck();
    unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    shuffle (deck.begin(), deck.end(), default_random_engine(seed));
    vector<UnoC> discard;
    
    vector<UnoC> computerHand;
    vector<UnoC> playerHand;
    for (int i = 0; i < 7; i++){
        computerHand.push_back(deck[0]);
        deck.erase(deck.begin());
        playerHand.push_back(deck[0]);
        deck.erase(deck.begin());
    }
    for (int i = 0; i < 7; i++){
        cout << computerHand[i].to_string() << endl;
    }
    cout << endl;
    for (int i = 0; i < 7; i++){
        cout << playerHand[i].to_string() << endl;
    }

    discard.push_back(draw_card(computerHand));
    while (!(computerHand.empty() || playerHand.empty())){
        computerTurn(computerHand, discard, deck);
        printHand(computerHand, "computer");
        computerTurn(playerHand, discard, deck);
        printHand(playerHand, "player");
        
    }
    if (computerHand.empty()){
        cout << "Computer wins!" << endl;
    } else {
        cout << "You win!" << endl;
    }

    return 0;
}