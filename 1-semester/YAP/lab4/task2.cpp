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

    int firstZero = -1, lastZero = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            if (firstZero == -1) {
                firstZero = i;
            }
            lastZero = i;
        }
    }

    int sum = 0;
    if (firstZero != -1 && firstZero != lastZero) {
        for (int i = firstZero + 1; i < lastZero; i++) {
            sum += arr[i];
        }
    }

    cout << "Сумма элементов между первым и последним нулевым элементом: " << sum << endl;

    return 0;
}
