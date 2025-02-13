#include <iostream>


int main() {
    int n;
    std::cin >> n;

    if (n < 2) {
        std::cout << "number menshe 2" << std::endl;
    }
    else {

        while (n % 2 == 0) 
        {
            std::cout << " " << 2;
            n /= 2;
        }

        for (int i = 3; i * i <= n; i += 2) 
        {
            while (n % i == 0) {
                std::cout << " " << i;
                n /= i;
            }
        }

        if (n > 1) 
        {
            std::cout <<" " << n;
        }

        std::cout << std::endl;
    }

    return 0;
}
