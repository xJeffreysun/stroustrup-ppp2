#include <iostream>

using namespace std;

int main() {
    cout << "Please enter pairs of values or a '|' to exit the program: ";
    double smallest;
    double largest;
    double value;
    if (cin >> value && value != '|') {
        smallest = value;
        largest = value;
        cout << value << endl;
    }
    while (cin >> value) {
        if (value == '|') {
            break;
        }
        cout << value << endl;
        if (value < smallest) {
            smallest = value;
            cout << "The smallest so far" << endl;
        }
        if (value > largest) {
            largest = value;
            cout << "The largest so far" << endl;
        }
    }
    return 0;
}