#include <iostream>
#include <cmath>

using namespace std;

int main() {
    constexpr int chess_squares = 64;
    constexpr int thousand_grains = 1000;
    constexpr int million_grains = 1000000;
    constexpr int billion_grains = 1000000000;
    bool passed_thousand = false;
    bool passed_million = false;
    int total_grains = 0;
    for (int i = 0; i < 64; ++i) {
        const int current_grains = pow(2, i);
        total_grains += current_grains;
        if (!passed_thousand && total_grains >= thousand_grains) {
            cout << "The emperor would need more than 1000 grains for square "
                 << i
                 << endl;
            passed_thousand = true;
            continue;
        }
        if (!passed_million && total_grains >= million_grains) {
            cout << "The emperor would need more than 1000000 grains for square "
                 << i
                 << endl;
            passed_million = true;
            continue;
        }
        if (total_grains >= billion_grains) {
            cout << "The emperor would need more than 1000000000 grains for square "
                 << i
                 << endl;
            break;
        }
    }
}