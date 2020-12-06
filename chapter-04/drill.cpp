#include <iostream>

using namespace std;

int main() {
    cout << "Please enter pairs of values or a '|' to exit the program: ";
    double val1;
    double val2;
    while (cin >> val1 && cin >> val2) {
        if (val1 == '|' || val2 == '|') {
            break;
        }
        if (val1 > val2) {
            cout << "The smaller value is: " << val2 << endl;
            cout << "The larger value is: " << val1 << endl;
            if (val1 - val2 < 0.01) {
                cout << "The numbers are almost equal" << endl;
            }
        } else if (val2 > val1) {
            cout << "The smaller value is: " << val1 << endl;
            cout << "The larger value is: " << val2 << endl;
            if (val2 - val1 < 0.01) {
                cout << "The numbers are almost equal" << endl;
            }
        } else {
            cout << "The numbers are equal" << endl;
        }
    }
    return 0;
}