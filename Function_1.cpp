#include <iostream>
#include <cstdlib>
using namespace std;

// returns "Heads" or "Tails"
string CoinFlip() {
    int value = rand() % 2;   // random number 0 or 1

    if (value == 1) {
        return "Heads";
    }
    else {
        return "Tails";
    }
}

int main() {
    int numFlips;
    
    cout << "How many times would you like to "
         << "flip a coin: ";
    cin >> numFlips;
    srand(2); // unique seed

    for (int i = 0; i < numFlips; i++) {
        cout << CoinFlip();
        
        if (i < numFlips - 1) {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
