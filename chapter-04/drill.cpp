#include <iostream>

using namespace std;

int main() {
    int first;
    int second;

    cout << "Read in two ints: ";
    while (cin >> first >> second) {
        if (first == '|' || second == '|') {
            return 0;
        }
        cout << "First of the pair was: " << first << endl;
        cout << "Second of the pair was: " << second << endl;
    }

    // return 0 at the end is unnecessary
}