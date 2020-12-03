#include <iostream>

using namespace std;

int main() {
    double val1;
    double val2;
    cout << "Input 2 values separated by spaces: ";
    cin >> val1 >> val2;
    if (val1 > val2) {
        cout << "The larger number is: " << val1 << endl;
        cout << "The smaller number is: " << val2 << endl;
        cout << "The difference is: " << val1 - val2 << endl;
    } else {
        cout << "The larger number is: " << val2 << endl;
        cout << "The smaller number is: " << val1 << endl;
        cout << "The difference is: " << val2 - val1 << endl;
    }
    cout << "The sum is: " << val1 + val2 << endl;
    cout << "The product is: " << val1 * val2 << endl;
    cout << "The ratio is: " << val1 / val2 << endl;
    return 0;
}