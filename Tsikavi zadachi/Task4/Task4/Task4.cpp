#include <iostream>
#include <chrono>

int main() {
    auto start_time = std::chrono::steady_clock::now();

    delete new int(1);
    bool resheto[10001];

    for (int i = 0; i <= 10000; i++)
    {
        resheto[i] = true;
    }

    for (int p = 2; p * p <= 10000; p++)
    {
        if (resheto[p]) {
            for (int i = p * p; i <= 10000; i += p)
            {
                resheto[i] = false;
            }
        }
    }

    for (int i = 2; i <= 10000; i++)
    {
        if (resheto[i])
        {
            std::cout << " " << i ;
        }
    }
    auto end_time = std::chrono::steady_clock::now();
    auto elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time);
    std::cout <<"     " << elapsed_ns.count() << " ns\n";
    return 0;
}
