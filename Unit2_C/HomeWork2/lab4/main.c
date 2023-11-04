#include <stdio.h>

int main()
{
    float num1;
    printf("Enter a number: ");
	scanf("%f", &num1);
	if(num1 > 0)
	{
		printf("%f is positive", num1);
	}
	if(num1 < 0)
	{
		printf("%f is negative", num1);
	}
	if(num1 == 0)
	{
		printf("you entered zero");
	}
    return 0;
}