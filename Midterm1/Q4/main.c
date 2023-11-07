#include <stdio.h>

void Reverse_Numbers(int x, char length);

int main()
{   int x = 1235;
    Reverse_Numbers(7501 , 4);

    return 0;
}

void Reverse_Numbers(int x, char length)
{   char counter =0;
    for(char i = length; i > 0; i--)
    {
        if(x == 0)
        {
            counter ++;
        }
        printf("%d", x % 10);
        x = x / 10;
    }
}