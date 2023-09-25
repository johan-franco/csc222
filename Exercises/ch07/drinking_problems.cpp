#include <iostream>
#include <string>
#include <list>
using namespace std;

void drink_calc() {
    int drinks_amount,x, thirst_max, largest_drink = 0, thirst_meter = 0, count = 0;
    double drunk_amount;
    cout << "How many glasses are there?: ";
    cin >> drinks_amount;
    //Array to contain glass oz values
    int ounces[drinks_amount];
    for (int i = 0; i < drinks_amount; i++) {
        cout << "How many oz in glass " << i+1 << " :";
        cin >> x;
        ounces[i] = x;
        cout << ounces[i];
    }
    cout << "How thirsty is Bob?: ";
    cin >> thirst_max;
    //Will end when thirst meter is no longer higher or equal
    while(thirst_meter <= thirst_max) {
        count +=1;
        //Looks for the index containing the highest value
        for (int i  = 0; i <drinks_amount; i++){
            if(ounces[largest_drink]<ounces[i]) {
                largest_drink = i;
                }
        }
        //Subtracts 1/4 from array and adds that 1/4 to thirst_meter
        drunk_amount = ceil(ounces[largest_drink] * .25);
        ounces[largest_drink] = ounces[largest_drink] - drunk_amount;
        thirst_meter = thirst_meter + drunk_amount;
        cout << "Drink " <<  count << ": " << drunk_amount << "oz from glass " << largest_drink + 1<< " " ;
        //Prints the values of the glasses
        for(int i = 0; i <drinks_amount; i++){
            cout<< ounces[i] << ' ';
        }
        cout << endl;
    }
    cout << "Drunk : " << thirst_meter;
    
}

int main(){
    drink_calc();
}