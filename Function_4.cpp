#include <iostream>
using namespace std;

// prototype
void computeCoins(int coinValue, int& num, int& amountLeft);

int main() {
    int amount;

    cout << "Enter amount of change (1–99 cents): ";
    cin >> amount;

    if (amount < 1 || amount > 99) {
        cout << "Invalid amount." << endl;
        return 0;
    }

    int amountLeft = amount;
    int quarters, dimes, pennies;

    // compute coins
    computeCoins(25, quarters, amountLeft);
    computeCoins(10, dimes, amountLeft);
    computeCoins(1, pennies, amountLeft);

    // result
    cout << amount << " cents can be given as "
         << quarters << " quarter(s) "
         << dimes << " dime(s) and "
         << pennies << " penny(pennies)" << endl;

    return 0;
}

// function
void computeCoins(int coinValue, int& num, int& amountLeft) {
    num = amountLeft / coinValue; // lowest int
    amountLeft = amountLeft % coinValue;
}
