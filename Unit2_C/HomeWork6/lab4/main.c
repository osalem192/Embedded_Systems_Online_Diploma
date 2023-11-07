#include <stdio.h>

int main()
{
    int arr[15] = {0}, length;
    printf("Input the number of elements to store in the array (max 15): ");
    scanf("%d", &length);

    for(char i = 0; i < length; i++)
    {
        printf("element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n");

    for(char i = (length-1); i >= 0; i--)
    {
        printf("element %d: %d\n", i+1, arr[i]);
    }

    return 0;
}