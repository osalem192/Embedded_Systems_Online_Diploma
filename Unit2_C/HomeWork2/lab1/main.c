#include <stdio.h>

int main(void)
{
    int x;
    printf("enter an int you want to check: ");
	scanf("%d",&x);

	if ((x&1) == 1)
	{
		printf("%d is odd",x);
	}
	else
	{
		printf("%d is even",x);
	}
}