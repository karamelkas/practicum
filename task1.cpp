#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите натуральное n: ";
    cin >> n;

    double product = 1.0;

    // Обрабатываем пары сомножителей
    for (int k = 1; k <= n / 2; k++) {
        product *= (2.0 * k) / (2.0 * k - 1);
        product *= (2.0 * k) / (2.0 * k + 1);
    }

    // Если n нечетное, добавляем последний сомножитель
    if (n % 2 != 0) {
        product *= (double)(n + 1) / n;
    }

    cout << "Произведение первых " << n << " сомножителей: " << product << endl;

    return 0;
}
