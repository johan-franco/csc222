#include <iostream>
#include <string>
#include <list>
using namespace std;

void drink_calc() {
    int drinks_amount,x, thirst_max, drunk_amount;
    int largest_drink = -1, thirst_meter = 0, count = 0;
    cout << "How many glasses are there?: ";
    cin >> drinks_amount;
    int ounces[drinks_amount];
    for (int i = 0; i < drinks_amount; i++) {
        cout << "How many oz in glass " << i+1 << " :";
        cin >> x;
        ounces[i] = x;
        cout << ounces[i];

    }
    cout << "How thirsty is Bob?: ";
    cin >> thirst_max;
    while(thirst_meter < thirst_max) {
        count +=1;
        largest_drink = 0;
        for (int i  = 0; i <drinks_amount; i++){
            if(largest_drink<ounces[i]) largest_drink = i;
            }
        drunk_amount = ounces[largest_drink] * .25;
        ounces[largest_drink] = ounces[largest_drink] * .75;
        thirst_meter = thirst_meter + drunk_amount;
        cout << ounces[largest_drink] << " ";
        cout << thirst_meter << " ";
        cout << "Drink " <<  count << ": " << drunk_amount << "oz from glass " << largest_drink + 1<< " " ;
        for(int i = 0; i <drinks_amount; i++){
            cout<< ounces[i] << ' ';
        }
        cout << endl;
    }

    
}

int main(){
    drink_calc();
}