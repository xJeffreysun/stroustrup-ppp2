#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    vector<double> temps;
    cout << "Input decimals separated by spaces: ";
    for (double temp; cin >> temp; ) {
        temps.push_back(temp);
    }
    
    sort(temps.begin(), temps.end());
    if (temps.size() % 2 == 1) {
        cout << "Median temperature: " << temps[temps.size() / 2] << endl;
    } else {
        double median = (temps[temps.size() / 2 - 1] + temps[temps.size() / 2]) / 2;
        cout << "Median temperature: " << median << endl;
    }
}