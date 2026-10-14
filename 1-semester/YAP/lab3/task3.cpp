#include <iostream>

using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    n = (n < 0) ? -n : n;

    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    return sum;
}

int main() {
    int n;
    cout << "Введите количество чисел: ";
    cin >> n;

    if (n <= 0) {
        cout << "Количество чисел должно быть положительным.\n";
        return 0;
    }

    cout << "Введите числа:\n";

    int number;
    cin >> number;

    int minSumValue = number;
    int maxSumValue = number;
    int minSum = sumOfDigits(number);
    int maxSum = minSum;

    for (int i = 1; i < n; ++i) {
        cin >> number;
        int currentSum = sumOfDigits(number);

        if (currentSum < minSum) {
            minSum = currentSum;
            minSumValue = number;
        }

        if (currentSum > maxSum) {
            maxSum = currentSum;
            maxSumValue = number;
        }
    }

    cout << "\nЧисло с наименьшей суммой цифр: " << minSumValue << " (сумма цифр: " << minSum << ")\n";
    cout << "Число с наибольшей суммой цифр: " << maxSumValue << " (сумма цифр: " << maxSum << ")\n";

    return 0;
}
