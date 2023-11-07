#include <stdio.h>

int Return_Unique(int arr[], int length);

int main()
{
    int arr[3]={4,2,4};
    int x = Return_Unique(arr, sizeof(arr) / sizeof(arr[0]));
    printf("unique numebr is: %d", x);

    return 0;
}

int Return_Unique(int arr[], int length)
{      
    int result = 0;

    for (int i = 0; i < length; i++) 
    {
        result ^= arr[i];
    }

    return result;
}