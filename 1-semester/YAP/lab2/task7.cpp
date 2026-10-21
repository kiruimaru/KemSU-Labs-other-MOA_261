#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> cities;
    string city;

    cout << "Введите 5 названий городов:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Город " << (i + 1) << ": ";
        cin >> city;
        cities.push_back(city);
    }

    cout << "\nСписок городов:" << endl;
    for (int i = 0; i < cities.size(); i++) {
        cout << i << ": " << cities[i] << endl;
    }

    return 0;
}
