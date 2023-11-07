#include <stdio.h>

int Calc_numberSome(int num);


int main()
{
    int num = 4565;
    printf("sum of all digits = %d", Calc_numberSome(num));
        
    return 0;
}

int Calc_numberSome(int num)
{   
    int sum = 0;
    
    for(int i = 0; i < 10; i++)
    {
        sum = sum + (num % 10);
        num = num / 10;
        i++;
    }
    return sum;
}