#include <iostream>


int main() {
    std:
    

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
   
    std::cout <<"     " ;
    return 0;
}