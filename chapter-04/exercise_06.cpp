#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> digits = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    string input;
    cout << "Enter a digit as a number or spelled out: ";
    cin >> input;
    for (int i = 0; i < numbers.size(); ++i) {
        if (input == numbers[i]) {
            cout << "Your number as a digit is: " << i << endl;
        }
        if (input == digits[i]) {
            cout << "Your number spelled out is: " << numbers[i] << endl;
        }
    }
}