#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long product = 1;
    for (int i = 0; i < n; i += 2) {
        product *= arr[i];
    }

    cout << "Произведение элементов с четными номерами: " << product << endl;

    return 0;
}
