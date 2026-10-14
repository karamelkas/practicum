#include <iostream>
using namespace std;

int main() {
    const int SIZE = 20;
    int A[SIZE];

    cout << "Введите " << SIZE << " элементов массива A:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> A[i];
    }

    bool isIncreasing = true;

    // Проверяем каждый элемент со следующим
    for (int i = 0; i < SIZE - 1; i++) {
        if (A[i] >= A[i + 1]) { // Если текущий больше или равен следующему
            isIncreasing = false;
            break; // Дальше проверять нет смысла
        }
    }

    if (isIncreasing) {
        cout << "Массив представляет собой строго возрастающую последовательность." << endl;
    } else {
        cout << "Массив НЕ является строго возрастающей последовательностью." << endl;
    }

    return 0;
}