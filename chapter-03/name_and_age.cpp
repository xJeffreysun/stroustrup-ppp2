#include <iostream>

using namespace std;

int main() {
    cout << "Please enter your first name and age: ";
    string first_name = "??";
    int age = 0;
    cin >> first_name >> age;
    cout << "Hello, " << first_name << " (age" << age << ")\n";
    return 0;
}