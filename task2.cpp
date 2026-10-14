#include <iostream>
using namespace std;

int main() {
    const int SIZE = 25;
    int M[SIZE];

    cout << "Введите " << SIZE << " элементов массива M:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> M[i];
    }

    int newArr[SIZE]; // Новый массив
    int newSize = 0;  // Текущий размер нового массива

    // Проходим по каждому элементу исходного массива
    for (int i = 0; i < SIZE; i++) {
        int count = 0;
        
        // Считаем, сколько раз элемент M[i] встречается в массиве
        for (int j = 0; j < SIZE; j++) {
            if (M[i] == M[j]) {
                count++;
            }
        }

        // Если элемент встречается ровно 1 раз, добавляем его в новый массив
        if (count == 1) {
            newArr[newSize] = M[i];
            newSize++;
        }
    }

    // Вывод результата
    cout << "Новый массив из уникальных элементов: ";
    if (newSize == 0) {
        cout << "(пусто)";
    } else {
        for (int i = 0; i < newSize; i++) {
            cout << newArr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}