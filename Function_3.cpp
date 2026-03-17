#include <iostream>
using namespace std;

void input(int& hours24, int& minutes);
void output(int hours, int minutes);

int main() {
    int timeHours, timeMinutes, waitHours, waitMinutes;
    int finishHours, finishMinutes;

    cout << "Compute completion time from current time and waiting period\n";

    char ans = 'y';
    while (ans == 'y' || ans == 'Y') {
        cout << "Current time:\n";
        input(timeHours, timeMinutes);

        cout << "Waiting time:\n";
        input(waitHours, waitMinutes);

        // compute finish time
        finishHours = timeHours + waitHours;
        finishMinutes = timeMinutes + waitMinutes;

        // extra minutes converted to hours
        finishHours += finishMinutes / 60;
        finishMinutes %= 60;

        // if there is a 24-hour wrap:
        if (finishHours >= 24) {
            finishHours %= 24;
            cout << "Completion time is in the day following the start time\n";
        }

        cout << "Completion time: ";
        output(finishHours, finishMinutes);

        cout << "\n\nEnter Y or y to continue, any other halts\n\n";
        cin >> ans;
    }

    return 0;
}

// input time
void input(int& hours24, int& minutes) {
    cout << "Enter hours (0-23): ";
    cin >> hours24;

    cout << "Enter minutes (0-59): ";
    cin >> minutes;
}

// output time in HH:MM format
void output(int hours, int minutes) {
    if (hours < 10) cout << "0";
    cout << hours << ":";

    if (minutes < 10) cout << "0";
    cout << minutes;
}
