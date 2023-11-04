#include <stdio.h>

int main()
{
int count = 0;
	float arr1[2][2] = {};
	float arr2[2][2] = {};
	float sum[2][2] = {0};

//	Scan first array elements
	printf("Enter the elements 1st Matrix\n");
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{	printf("Enter a%d%d: ", i+1,j+1);
			scanf("%f", &arr1[i][j]);
		}
	}

//	Scan second array elements
	printf("Enter the elements 2nd Matrix\n");
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{	printf("Enter b%d%d: ", i+1,j+1);
			scanf("%f", &arr2[i][j]);
		}
	}

//	sum two arrays and print them
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			if (!(count % 2))
			{
			sum[i][j] = arr1[i][j] + arr2[i][j];
			printf("%f	", sum[i][j]);
			}
			else
			{
			sum[i][j] = arr1[i][j] + arr2[i][j];
			printf("%f\n", sum[i][j]);
			}
			count ++;
		}
	}
}