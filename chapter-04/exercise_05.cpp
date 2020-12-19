#include <iostream>

using namespace std;

int main() {
    double val1;
    double val2;
    char oper;
    cout << "Enter two real numbers separated by an operator: ";
    cin >> val1 >> oper >> val2;
    switch (oper) {
        case '+':
            cout << "The sum of " 
                 << val1 
                 << " and " 
                 << val2 
                 << " is "
                 << val1 + val2
                 << endl;
            break;
        case '-':
            cout << "The difference between "
                 << val1
                 << " and "
                 << val2
                 << " is "
                 << val1 - val2
                 << endl;
            break;
        case '*':
            cout << "The product of " 
                 << val1 
                 << " and " 
                 << val2 
                 << " is "
                 << val1 * val2
                 << endl;
            break;
        case '/':
            cout << "The quotient of " 
                 << val1 
                 << " and " 
                 << val2 
                 << " is "
                 << val1 / val2
                 << endl;
            break;
    }
}