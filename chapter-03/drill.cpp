#include <iostream>

using namespace std;

int main() {
    string first_name;
    cout << "Please enter your first name: ";
    cin >> first_name;
    cout << "Hello, " << first_name << endl;
    cout << "How are you doing?" << endl;
    cout << "Please add the name of another friend: ";
    string friend_name;
    cin >> friend_name;
    char friend_sex{0};
    cout << "If your friend is male enter 'm' or 'f' if female: ";
    cin >> friend_sex;
    if (friend_sex == 'm') {
        cout << "If you see " << friend_name << " please ask him to call me." << endl;
    }
    if (friend_sex == 'f') {
        cout << "If you see " << friend_name << " please ask her to call me." << endl;
    }
    int age;
    cout << "Please enter your age: ";
    cin >> age;
    cout << "I hear you just had a birthday and you are " << age << " years old." << endl;
    if (age <= 0 || age >= 110) {
        cout << "You're kidding!" << endl;
    }
    if (age < 12) {
        cout << "Next year you will be " << age + 1 << endl;
    }
    if (age == 17) {
        cout << "Next year you will be able to vote" << endl;
    }
    if (age >= 70) {
        cout << "I hope you are enjoying retirement" << endl;
    }
    cout << "Yours sincerely," << endl;
    cout << "    Jeffrey Sun" << endl;
}
