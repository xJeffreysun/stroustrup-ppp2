#include <iostream>

using namespace std;

int main() {
    cout << "Please enter pairs of values or a '|' to exit the program: ";
    int val1;
    int val2;
    while (cin >> val1 && cin >> val2) {
        if (val1 == '|' || val2 == '|') {
            break;
        }
        cout << val1 << endl;
        cout << val2 << endl;
    }
    return 0;
}