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

    for (int i = 1; i <= n; i++) {
        cout << i;
        if (i < n) cout << " ";
    }
    cout << endl;

    return 0;
}
