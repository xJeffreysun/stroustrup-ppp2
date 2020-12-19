#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    cout << "Input a decimal distances separated by spaces: ";
    vector<double> distances;
    double total_distance = 0;
    for (double distance; cin >> distance;) {
        distances.push_back(distance);
        total_distance += distance;
    }
    sort(distances.begin(), distances.end());
    cout << "Total distance: " << total_distance << endl;
    cout << "Shortest distance: " << distances[0] << endl;
    cout << "Greatest distance: " << distances[distances.size() - 1] << endl;
    cout << "Mean distance: " << total_distance / distances.size() << endl;
}
