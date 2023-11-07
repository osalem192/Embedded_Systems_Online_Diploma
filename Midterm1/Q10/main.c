#include <stdio.h>

int countMaxOnes(int n);

int main() 
{
    int n = 14;
    int maxOnes = countMaxOnes(n);
    printf("The maximum number of ones between two zeros in %d is %d\n", n, maxOnes);

    return 0;
}

int countMaxOnes(int n) 
{
    int mac = 0, current = 0;

    while (n) 
    {
        if (n & 1) 
        {
            current++;
        } 
        else 
        {
            if (current > mac) 
            {
                mac = current;
            }
            current = 0;
        }

        n >>= 1;
    }

    if (current > mac) 
    {
        mac = current;
    }

    return mac;
}
