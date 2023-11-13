#include "test.h"
using namespace std;

int main(){
    vector<UnoC> deck = build_deck();
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
        computerTurn(playerHand, discard, deck);
        
       break; 
    }
    if (computerHand.empty()){
        cout << "Computer wins!" << endl;
    } else {
        cout << "You win!" << endl;
    }

    return 0;
}