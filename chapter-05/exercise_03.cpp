#include <iostream>

using namespace std;

double ctok(double c) {
    double k = c + 273.15;
    return k;
}

int main() {
    constexpr double min_celsius = -273.15;
    try {
        double c = 0.0;
        cin >> c;
        if (c < min_celsius) {
            throw c;
        }
        double k = ctok(c);
        cout << k << endl;
    } catch (double e) {
        cerr << "Exception (temperature too low): " << e << endl;
    }
}