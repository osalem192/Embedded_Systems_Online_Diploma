#include <stdio.h>

int main()
{
    int x, sum = 0;
    printf("Enter an int: ");
	scanf("%d", &x);
	for (int i = x; i > 0; i --)
	{
		sum += i;
	}
	printf("sum = %d", sum);
    return 0;
}