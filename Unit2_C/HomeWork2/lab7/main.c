#include <stdio.h>

int main()
{
    int x,  fact = 1;
    printf("Enter an int: ");
	scanf("%d",&x);
	if(x < 0)
	{
		printf("Error !!! Factorial of a negative number doesn't exist");
	}
	else
	{
		for(int i = 0; i < x; i++)
		{
			fact = fact * (i + 1);
		}
		printf("Factorial = %d", fact);
	}
    return 0;
}