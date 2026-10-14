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

    cout << "Было: [";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << ", ";
    }
    cout << "]" << endl;

    vector<int> newArr;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            newArr.push_back(-1);
        }
        newArr.push_back(arr[i]);
    }

    cout << "Стало: [";
    for (size_t i = 0; i < newArr.size(); i++) {
        cout << newArr[i];
        if (i < newArr.size() - 1) cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
