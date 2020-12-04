#include <iostream>

using namespace std;

int main() {
    int pennies;
    int nickels;
    int dimes;
    int quarters;
    int half_dollars;
    cout << "How many pennies do you have? ";
    cin >> pennies;
    cout << "How many nickels do you have? ";
    cin >> nickels;
    cout << "How many dimes do you have? ";
    cin >> dimes;
    cout << "How many quarters do you have? ";
    cin >> quarters;
    cout << "How many half dollars do you have? ";
    cin >> half_dollars;
    if (pennies == 1) {
        cout << "You have " << pennies << " penny" << endl;
    } else {
        cout << "You have " << pennies << " pennies" << endl;
    }
    if (nickels == 1) {
        cout << "You have " << nickels << " nickel" << endl;
    } else {
        cout << "You have " << nickels << " nickels" << endl;
    }
    if (dimes == 1) {
        cout << "You have " << dimes << " dime" << endl;
    } else {
        cout << "You have " << dimes << " dimes" << endl;
    }
    if (quarters == 1) {
        cout << "You have " << quarters << " quarter" << endl;
    } else {
        cout << "You have " << quarters << " quarters" << endl;
    }
    if (half_dollars == 1) {
        cout << "You have " << half_dollars << " half dollar" << endl;
    } else {
        cout << "You have " << half_dollars << " half dollars" << endl;
    }
    int total = pennies + 5 * nickels + 10 * dimes + 25 * quarters + 50 * half_dollars;
    int dollars = total / 100;
    int cents = total % 100;
    cout << "Your total is $" << dollars << "." << cents << endl;
    return 0;
}