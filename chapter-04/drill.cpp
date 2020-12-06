#include <iostream>

using namespace std;

int main() {
    const double m_to_cm = 100.0;
    const double in_to_cm = 2.54;
    const double ft_to_cm = 12 * in_to_cm;

    cout << "Please enter a value followed by a unit or a '|' to exit the program: ";
    double smallest;
    double largest;
    double value;
    string unit;
    if (cin >> value >> unit && value != '|') {
        if (unit == "cm") {
            smallest = value;
            largest = value;
        } else if (unit == "m") {
            smallest = m_to_cm * value;
            largest = m_to_cm * value;
        } else if (unit == "in") {
            smallest = in_to_cm * value;
            largest = in_to_cm * value;
        } else if (unit == "ft") {
            smallest = ft_to_cm * value;
            largest = ft_to_cm * value;
        }
        cout << value << " " << unit << endl;
    }
    while (cin >> value >> unit) {
        cout << value << " " << unit << endl;
        char id;
        double cm_value;
        if (value == '|') {
            break;
        }
        if (unit == "cm") {
            char id = 'c';
        } else if (unit == "m") {
            char id = 'm';
        } else if (unit == "in") {
            char id = 'i';
        } else if (unit == "ft") {
            char id = 'f';
        }
        switch (id) {
            case 'c':
                cm_value = value;
                break;
            case 'm':
                cm_value = m_to_cm * value;
                break;
            case 'i':
                cm_value = in_to_cm * value;
                break;
            case 'f':
                cm_value = ft_to_cm * value;
                break;
        }
        if (cm_value > largest) {
            largest = cm_value;
            cout << "The largest so far" << endl;
        }
        if (cm_value < smallest) {
            smallest = cm_value;
            cout << "The smallest so far" << endl;
        }
    }
    return 0;
}