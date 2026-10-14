#include <iostream>

using namespace std;

long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }

    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }

    return result;
}

int main() {
    int m, n;
    cout << "Введите диапазон [m, n]:\n";
    cout << "m = ";
    cin >> m;
    cout << "n = ";
    cin >> n;

    if (m > n) {
        cout << "Некорректный диапазон.\n";
        return 0;
    }

    if (m < 0 || n < 0) {
        cout << "Числа должны быть неотрицательными.\n";
        return 0;
    }

    long long sum = 0;

    cout << "\nФакториалы четных чисел:\n";
    for (int i = m; i <= n; ++i) {
        if (i % 2 == 0) {
            long long fact = factorial(i);
            cout << i << "! = " << fact << '\n';
            sum += fact;
        }
    }

    cout << "\nСумма факториалов четных чисел: " << sum << '\n';

    return 0;
}
