#include <iostream>
#include <chrono>

int main()
{
    auto start_time = std::chrono::steady_clock::now();

    delete new int(1);
    int n = 10000;
    int* a = new int[n + 1];
    for (int i = 0;i <= n;i++)
    {
        a[i] = i;
    }

    for (int i = 2; i * i <= n;i++)
    {
        if (a[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                a[j] = 0;
            }
        }
    }

    for (int i = 2;i < n;i++)
    {
        if (a[i])
        {
            std::cout << a[i] << ' ';
        }
    }

    std::cout << std::endl << std::endl;
    delete[] a;
    auto end_time = std::chrono::steady_clock::now();
    auto elapsed_ns = std::chrono::duration_cast<std::chrono::nanoseconds>(end_time - start_time);
    std::cout << "     " << elapsed_ns.count() << " ns\n";

    return 0;

}