#include <iostream>

bool isPalindrome(int num) 
{
    int reversed = 0;
    int original = num;

    while (num > 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }

    return original == reversed;
}

int main() {    
    for (int i = 9; i < 100; ++i) // int i = 9; бо цифри не можуть бути поліндромами (?)
    {
        if (isPalindrome(i)) 
        { 
            int square = i * i;
            if (isPalindrome(square)) 
            { 
                std::cout << i << " " << square << std::endl;
            }
        }
    }

    return 0;
}
