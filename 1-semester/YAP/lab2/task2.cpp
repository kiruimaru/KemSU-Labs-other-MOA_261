#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cout << "Введите число (0-9999): ";
    cin >> n;

    if (n < 0 || n > 9999) {
        cout << "Число должно быть от 0 до 9999!" << endl;
        return 1;
    }

    string numStr = to_string(n);
    while (numStr.length() < 4) {
        numStr = "0" + numStr;
    }

    bool isPalindrome = true;
    int len = numStr.length();
    for (int i = 0; i < len / 2; i++) {
        if (numStr[i] != numStr[len - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "Число " << numStr << " является палиндромом" << endl;
    } else {
        cout << "Число " << numStr << " не является палиндромом" << endl;
    }

    return 0;
}
