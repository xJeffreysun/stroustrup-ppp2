#include <iostream>

using namespace std;

int main() {
    int value;
    cout << "Input an integer: ";
    cin >> value;
    if (value % 2 == 0) {
        cout << "Your integer, " << value << ", is even" << endl;
    } else {
        cout << "Your integer, " << value << ", is odd" << endl;
    }
    return 0;
}