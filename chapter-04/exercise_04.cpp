#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    cout << "Input a number between 1 and 100: ";
    cin >> num;
    int upper_bound = 99;
    int lower_bound = 2;
    while (abs(upper_bound - lower_bound) > 1) {
        char correct_range;
        int midpoint = (upper_bound + lower_bound) / 2;
        cout << "Is the number you are thinking of less than "
             << midpoint
             << "? 'y' or 'n' "
             << endl;
        cin >> correct_range;
        cout << "Upper bound: " << upper_bound << endl;
        cout << "Lower bound: " << lower_bound << endl;
        switch (correct_range) {
            case 'y':
                upper_bound = midpoint - 1;
                cout << "Upper bound is now: " << upper_bound << endl;
                break;
            case 'n':
                lower_bound = midpoint;
                cout << "Lower bound is now: " << lower_bound << endl;
                break;
        }
    }
    if (abs(upper_bound - lower_bound) == 1) {
        char answer;
        cout << "Is your number " << upper_bound << ": ";
        cin >> answer;
        switch (answer) {
            case 'y':
                lower_bound = upper_bound;
            case 'n':
                upper_bound = lower_bound;
        }
    }
    cout << "Your number is : " << upper_bound << endl;
}