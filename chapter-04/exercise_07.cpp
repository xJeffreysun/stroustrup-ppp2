#include <iostream>
#include <vector>
#include <string>

using namespace std;

int to_int(string input) {
    vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> digits = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    for (int i = 0; i < numbers.size(); ++i) {
        if (input == numbers[i] || input == digits[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    string val1;
    string val2;
    char oper;
    cout << "Enter two real numbers separated by an operator: ";
    cin >> val1 >> oper >> val2;
    switch (oper) {
        case '+':
            cout << "The sum of " 
                 << to_int(val1)
                 << " and " 
                 << to_int(val2) 
                 << " is "
                 << to_int(val1) + to_int(val2)
                 << endl;
            break;
        case '-':
            cout << "The difference between "
                 << to_int(val1)
                 << " and "
                 << to_int(val2)
                 << " is "
                 << to_int(val1) - to_int(val2)
                 << endl;
            break;
        case '*':
            cout << "The product of " 
                 << to_int(val1) 
                 << " and " 
                 << to_int(val2) 
                 << " is "
                 << to_int(val1) * to_int(val2)
                 << endl;
            break;
        case '/':
            cout << "The quotient of " 
                 << to_int(val1) 
                 << " and " 
                 << to_int(val2) 
                 << " is "
                 << to_int(val1) / to_int(val2)
                 << endl;
            break;
    }
}