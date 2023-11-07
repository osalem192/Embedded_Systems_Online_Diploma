#include <stdio.h>

void Prime_Interval(int x, int y);

int main()
{
    int n1 = 1, n2 = 20;
    Prime_Interval(n1, n2);


    return 0;
}

void Prime_Interval(int x, int y)
{   
    int counter = 0;
    for(int i = x; i <= y; i++)
    {
        for(int j = 2; j < i; j++)
        {
            if(i%j == 0)
            {
                counter ++;
            }

        }

        if (counter == 0)
        {
            printf("%d  ", i);
        }
        counter = 0;

    }
}