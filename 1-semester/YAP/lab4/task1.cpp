#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    if (n <= 0) {
        cout << "Размер массива должен быть положительным.\n";
        return 0;
    }

    vector<int> arr(n);
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    long long product = 1;
    for (int i = 0; i < n; i += 2) {
        product *= arr[i];
    }

    cout << "Произведение элементов с четными номерами: " << product << '\n';

    return 0;
}
