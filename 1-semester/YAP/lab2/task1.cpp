#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите второе число: ";
    cin >> num2;

    if (num1 > 0 && num2 % 2 == 0) {
        cout << "да" << endl;
    } else {
        cout << "нет" << endl;
    }

    return 0;
}
