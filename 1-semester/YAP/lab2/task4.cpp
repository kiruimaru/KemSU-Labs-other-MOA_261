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

    long long product = 1;
    for (int i = 1; i <= n; i++) {
        product *= i;
    }

    cout << "Произведение чисел от 1 до " << n << " = " << product << endl;

    return 0;
}
