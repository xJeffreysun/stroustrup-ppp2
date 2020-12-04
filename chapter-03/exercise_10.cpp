#include <iostream>

using namespace std;

int main() {
    cout << "Please enter an operation followed by two real numbers separated by spaces: ";
    string operation;
    double val1;
    double val2;
    cin >> operation >> val1 >> val2;
    if (operation == "+") {
        cout << val1 + val2 << endl;
    } else if (operation == "-") {
        cout << val1 - val2 << endl;
    } else if (operation == "*") {
        cout << val1 * val2 << endl;
    } else if (operation == "/") {
        cout << val1 / val2 << endl;
    } else if (operation == "plus") {
        cout << val1 + val2 << endl;
    } else if (operation == "minus") {
        cout << val1 - val2 << endl;
    } else if (operation == "mul") {
        cout << val1 * val2 << endl;
    } else if (operation == "div") {
        cout << val1 / val2 << endl;
    } else {
        cout << "Not an operation I know" << endl;
    }
    return 0;
}