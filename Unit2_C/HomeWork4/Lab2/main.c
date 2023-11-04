#include <Stdio.h>

int Factorial(int number);

int main()
{
    int number;
    printf("Enter positive enteger: ");
    scanf("%d", &number);
    printf("Factorial of %d = %d", number, Factorial(number));
    return 0;
}

int Factorial(int number)
{
    if (number >= 1)
    {
        return number * Factorial(number-1);
    }
    else
    {   
        return 1;
    }
}