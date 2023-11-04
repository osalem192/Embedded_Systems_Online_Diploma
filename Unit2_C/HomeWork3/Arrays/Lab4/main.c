#include <stdio.h>

int main()
{
    int no_elements, new_element, location;
	int arr[100];
	printf("Enter no of elements: ");
	scanf("%d", &no_elements);

	for(int i = 0; i <= no_elements; i++)
	{
		arr[i] = i + 1;
	}

	printf("Enter the element to be inserted: ");
	scanf("%d", &new_element);
	printf("Enter the location ");
	scanf("%d", &location);

	for(int i = no_elements; i > location; i--)
	{
		arr[i] = arr[i-1];

	}
	arr[location] = new_element;

	for(int i = 0; i <= no_elements; i++)
	{
		printf("%d",arr[i]);
	}               
    return 0;
}