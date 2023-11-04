#include <stdio.h>

int main()
{
    int x;
	float sum = 0;
	float arr[100] = {};
	printf("Enter the number of data: ");
	scanf("%d", &x);

	for(int i = 0; i < x; i++)
	{
		printf("Enter number %d: ", i);
		scanf("%f", &arr[i]);
		sum = sum + arr[i];
	}
	printf("Average = %f",sum / x);

	return 0;
}