#include <iostream>

using namespace std;

int main() {
    double num = 0;
    string str = "";
    cin >> num >> str; // cin stops searching for int after nondigit
    cout << "string is : " << str << endl;
    cout << "number is: " << num << endl;

    // return 0 at the end is unnecessary
}