#include <stdio.h>

int main()
{
    float num1, num2, num3;
    printf("Enter three numbers: ");
	scanf("%f %f %f", &num1 , &num2, &num3);
	if(num1 > num2 && num2 > num3)
	{
		printf ("Largest number = %f", num1);
	}
	if(num1 < num2 && num2 > num3 )
	{
		printf ("Largest number = %f", num2);
	}
	if(num1 < num2 && num2 < num3)
	{
		printf ("Largest number = %f", num3);
	}
}