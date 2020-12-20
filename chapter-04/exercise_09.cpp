#include <iostream>
#include <cmath>

using namespace std;

int main() {
    constexpr double chess_squares = 64;
    double total_grains = 0;
    for (double i = 0; i < chess_squares; ++i) {
        total_grains += pow(2, i);
        cout << "Total grains at " << i << " is " << total_grains << endl;
    }
}