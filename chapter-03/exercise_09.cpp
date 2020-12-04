#include <iostream>

using namespace std;

int main() {
    cout << "Choose an integer to write out in characters: ";
    string str;
    cin >> str;
    if (str == "zero") {
        cout << 0 << endl;
    } else if (str == "one") {
        cout << 1 << endl;
    } else if (str == "two") {
        cout << 2 << endl;
    } else if (str == "three") {
        cout << 3 << endl;
    } else if (str == "four") {
        cout << 4 << endl;;
    } else {
        cout << "Not a number I know" << endl;
    }
    return 0;
}