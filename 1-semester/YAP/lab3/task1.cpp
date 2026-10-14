#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
    if (n % 2 == 0) {
        return false;
    }

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int a, b;
    cout << "Введите диапазон [a, b]:\n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    if (a > b) {
        cout << "Некорректный диапазон.\n";
        return 0;
    }

    vector<int> primes;

    cout << "\nа) Простые числа в диапазоне [" << a << ", " << b << "]:\n";
    for (int i = a; i <= b; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
            cout << i << ' ';
        }
    }
    cout << '\n';

    cout << "\nб) Дружественные числа (простые числа, отличающиеся на 2):\n";
    bool found = false;
    for (size_t i = 0; i < primes.size() - 1; ++i) {
        if (primes[i + 1] - primes[i] == 2) {
            cout << "(" << primes[i] << ", " << primes[i + 1] << ")\n";
            found = true;
        }
    }

    if (!found) {
        cout << "Дружественные числа не найдены.\n";
    }

    return 0;
}
