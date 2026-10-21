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

    cout << "\nИсходный список:" << endl;
    for (int i = 0; i < cities.size(); i++) {
        cout << i << ": " << cities[i] << endl;
    }

    int index;
    cout << "\nВведите индекс для удаления (0-" << (cities.size() - 1) << "): ";
    cin >> index;

    if (index >= 0 && index < cities.size()) {
        cities.erase(cities.begin() + index);
        cout << "\nОбновленный список:" << endl;
        for (int i = 0; i < cities.size(); i++) {
            cout << i << ": " << cities[i] << endl;
        }
    } else {
        cout << "Неверный индекс!" << endl;
    }

    return 0;
}
