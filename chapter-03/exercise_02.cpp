#include <iostream>

using namespace std;

int main() {
    double miles;
    cout << "Please input a distance in miles to convert to kilometers: ";
    cin >> miles;
    cout << "Your distance in km is: " << miles * 1.609 << endl;
    return 0;
}
