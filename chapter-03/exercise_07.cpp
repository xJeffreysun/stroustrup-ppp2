#include <iostream>

using namespace std;

int main() {
    string val1;
    string val2;
    string val3;
    cout << "Input 3 words to be sorted separated by spaces: ";
    cin >> val1 >> val2 >> val3;
    if (val1 > val2) {
        string temp = val1;
        val1 = val2;
        val2 = temp;
    }
    if (val2 > val3) {
        string temp = val2;
        val2 = val3;
        val3 = temp;
    }
    if (val1 > val2) {
        string temp = val1;
        val1 = val2;
        val2 = temp;
    }
    cout << val1 << " " << val2 << " " << val3 << endl;
    return 0;
}