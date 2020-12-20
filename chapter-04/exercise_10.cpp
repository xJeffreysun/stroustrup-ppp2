#include <iostream>
#include <random>

using namespace std;

void scorer(int score) {
    switch (score) {
        case -1:
            cout << "You lost" << endl;
            break;
        case 0:
            cout << "You tied" << endl;
            break;
        case 1:
            cout << "You won" << endl;
            break;
    }
}

void play_computer(char input) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(-1, 1);
    int score = dist(gen);
    switch (input) {
        case 'r':
            cout << "You played rock" << endl;
            break;
        case 'p':
            cout << "You played paper" << endl;
            break;
        case 's':
            cout << "You played scissors" << endl;
            break;
    scorer(score);
    }
}

int main() {
    for (char input; cin >> input; ) {
        cout << "Enter a 'r', 'p', or 's' to play rock, paper, scissors: ";
        play_computer(input);
    }
}