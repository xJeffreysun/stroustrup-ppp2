#include <iostream>

using namespace std;

int main() {
    cout << "Please enter your first name and age: ";
    string first_name = "??";
    double age = 0;
    cin >> first_name >> age;
    age = age * 12;
    cout << "Hello, " << first_name << " (age" << age << ")\n";
    return 0;
}