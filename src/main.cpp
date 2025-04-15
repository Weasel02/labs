#include <iostream>
#incluse <cstdlib>
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

int main(int argc, char *argv[]) {
    if(argc != 2){
    	cerr << "Использование:" << argv[0] << "<номер числа Фибоначчи>\n";
    	return 1;
    }

    int n = atoi(argv[1]);

    if (n < 1 || n > 93) {
        cerr << "Ошибка: число должно быть от 1 до 93!\n";
        return 1;
    }

    long long result = fibonacci(n);

    cout << "Число Фибоначчи под номером " << n << ": " << result << endl;
    return 0;
}
