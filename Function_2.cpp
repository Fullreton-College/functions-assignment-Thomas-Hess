#include <iostream>
using namespace std;
// We will use cents for all monetary values. This will let us
// work with integer, rather than floating-point, variables.
const int TWINKIE_PRICE = 350;

// Prompt the user to insert coins until enough has been paid to buy
// a twinkie. The total amount inserted, in cents, is returned.
int accept_money();

// Returns the amount of change that should be returned to the user.
int compute_change(int total_paid);

int main() {
    // Declare variables for the amount of money that the user enters,
    // along with the change that is to be returned to them.
    int money_entered, change;

    // Make sure that monetary values we output are formatted with
    // two digits after the decimal point.
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    // Collect money from the user
    money_entered = accept_money();

    // Figure out how much change to return
    change = compute_change(money_entered);

    // Dispense the twinkie
    cout << "\nEnjoy your deep-fried twinkie. Your change is $"
         << change/100.0 << endl;

    return 0;
}

int accept_money() {
    int total = 0;
    int coin;

    cout << "Insert coins (100=dollar, 25=quarter, 10=dime, 5=nickel)" << endl;

    while(total < TWINKIE_PRICE) {
        cout << "Enter coin: ";
        cin >> coin;

        if(coin == 100 || coin == 25 || coin == 10 || coin == 5) {
            total += coin;
            cout << "Total inserted: $" << total / 100.0 << endl;
        }
        else {
            cout << "Invalid coin. Try again." << endl;
        }
    }

    return total;
}

int compute_change(int total_paid) {
    return total_paid - TWINKIE_PRICE;
}

cout << "You have to insert " << TWINKIE_PRICE
       << "more cents to deep fry your twinkie.\n"
       << "Please insert common denominator currency "
       << "(dollar, quarter, dime, or nickle in cents): "
  cin >> insertedMoney 
  if(money_entered != 100 || 25 || 10 || 5) {
    "That isn't a common denominator currency. Try again: "
  }
