#include <iostream>
#include <string>
#include <list>
using namespace std;

void drink_calc() {
    int drinks_amount,x, thirst_max, largest_drink_index = 0, thirst_meter = 0, count = 0;
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
            if(ounces[largest_drink_index]<ounces[i]) {
                largest_drink_index = i;
                }
        }
        //Subtracts 1/4 from array and adds that 1/4 to thirst_meter
        drunk_amount = ceil(ounces[largest_drink_index] * .25);
        ounces[largest_drink_index] = ounces[largest_drink_index] - drunk_amount;
        thirst_meter = thirst_meter + drunk_amount;
        cout << "Drink " <<  count << ": " << drunk_amount << "oz from glass " << largest_drink_index + 1<< " " ;

        //Prints the values of the glasses
        for(int i = 0; i <drinks_amount; i++){
            cout<< ounces[i] << ' ';
        }
        cout << endl;
    }
    cout << "Drunk : " << thirst_meter<< endl;
    cout << "It took Bob " << count << " drinks to satisfy his thirst";
    
}

int main(){
    drink_calc(Mylist, num);
    
    return 0;
}