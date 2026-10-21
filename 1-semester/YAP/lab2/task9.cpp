#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
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

    cout << "\nВведите название города для поиска: ";
    cin >> city;

    auto it = find(cities.begin(), cities.end(), city);
    if (it != cities.end()) {
        int index = distance(cities.begin(), it);
        cout << "Город \"" << city << "\" найден на позиции: " << index << endl;
    } else {
        cout << "Город \"" << city << "\" не найден" << endl;
    }

    return 0;
}
