#include <iostream>

// Макрос для вычисления определителя второго порядка
#define DET2(a, b, c, d) ((a) * (d) - (b) * (c))

int main() {
    setlocale(LC_ALL, "Russian");
    // Исходные данные
    int a = 2;
    int b = 3;
    int c = 4;
    int d = 5;

    // Вычисление определителя
    int determinant = DET2(a, b, c, d);

    // Вывод исходных данных и результата расчета
    std::cout << "Исходные данные:" << std::endl;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    std::cout << "d: " << d << std::endl;

    std::cout << "Результат расчета:" << std::endl;
    std::cout << "Определитель: " << determinant << std::endl;

    return 0;
}
