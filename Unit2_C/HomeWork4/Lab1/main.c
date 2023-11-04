#include <stdio.h>

void Prime_Interval(int x, int y);

int main()
{
    int x, y;
    printf("Enter two numbers (inervals)");
    scanf("%d %d", &x, &y);
    Prime_Interval(x,y);
    return 0;
}

void Prime_Interval(int x, int y)
{	int flag = 0;
    for(int i = x; i < y; i++)
    {
        for(int j = 2; j < i; j++)
        {
            if((i % j) == 0)
            {
                flag ++;
            }
        }
        if(flag == 0)
        {
        	printf("%d\t", i);

        }
        flag = 0;
    }
}