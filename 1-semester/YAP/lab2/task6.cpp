#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Введите натуральное число n: ";
    cin >> n;

    if (n < 1) {
        cout << "Число должно быть больше 0!" << endl;
        return 1;
    }

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            sum += i;
        }
    }
    cout << endl;
    cout << "Сумма делителей: " << sum << endl;

    return 0;
}
