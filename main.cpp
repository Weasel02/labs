#include <iostream>
#include <limits>

using namespace std;


long long fibonacci(int n) {
    if (n <= 0) return -1;
    if (n == 1) return 0;
    if (n == 2) return 1;

    long long a = 0, b = 1, c;
    for (int i = 3; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    cout << "Введите номер числа Фибоначчи (от 1 до 93): ";
    
    if (!(cin >> n)) {
        cerr << "Ошибка: введено не число!\n";
        return 1;
    }

    if (n < 1 || n > 93) {
        cerr << "Ошибка: число должно быть от 1 до 93!\n";
        return 1;
    }

    long long result = fibonacci(n);
    if (result == -1) {
        cerr << "Ошибка: n должно быть положительным!\n";
        return 1;
    }

    cout << "Число Фибоначчи под номером " << n << ": " << result << endl;
    return 0;
}
