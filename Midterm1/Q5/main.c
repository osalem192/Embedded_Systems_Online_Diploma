#include <stdio.h>

void Return_Unique(int x);

int main()
{
    Return_Unique(5);

    return 0;
}

void Return_Unique(int x)
{   unsigned char counter =0;
    for(unsigned char i = 0; i < 32; i++)
    {
        if((x&(1<<i))>>i == 1)
        {
            counter ++;
        }
    }
    printf("number of ones = %d", counter);
}