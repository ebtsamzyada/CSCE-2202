#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Coin_Change (int V, vector<int>& coins){
    // sort the coins array in descending order
    sort(coins.begin(), coins.end(), greater<int>());

   int coins_used=0; 
    // Traverse through all the coins 
    for(int i = 0; i < coins.size(); i++){
        // If the current coin is smaller than V, select it
        while(V >= coins[i]) {
            V -= coins[i];
            coins_used++;
        }
    }
    
    return coins_used;
}

int main() {
    int V = 83; 
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 1000}; 

   cout << "Denominations used : "<< Coin_Change(V, coins);

    return 0;
}










