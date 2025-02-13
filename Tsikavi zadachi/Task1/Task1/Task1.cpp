

#include <iostream>


int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    for (int a = 1; a <= n; ++a) {
        for (int b = a; b <= n; ++b) { // b >= a, ��� �������� ����������
            int c = a * a + b * b;
            int sqrt_c = static_cast<int>(sqrt(c));

            if (sqrt_c * sqrt_c == c && sqrt_c <= n) {
                std::cout << "(" << a << ", " << b << ", " << sqrt_c << ")\n";
            }
        }
    }

    return 0;
}

