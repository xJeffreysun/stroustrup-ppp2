#include <iostream>

using namespace std;

int main() {
    int val1;
    int val2;
    int val3;
    cout << "Input 3 numbers to be sorted separated by spaces: ";
    cin >> val1 >> val2 >> val3;
    if (val1 > val2) {
        int temp = val1;
        val1 = val2;
        val2 = temp;
    }
    if (val2 > val3) {
        int temp = val2;
        val2 = val3;
        val3 = temp;
    }
    if (val1 > val2) {
        int temp = val1;
        val1 = val2;
        val2 = temp;
    }
    cout << val1 << " " << val2 << " " << val3 << endl;
    return 0;
}