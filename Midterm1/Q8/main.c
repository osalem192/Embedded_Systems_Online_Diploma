#include <stdio.h>

void Reverse_Words(int arr[], int length);

int main()
{   
    int arr[5]={1,2,3,4,5};
    Reverse_Words(arr, sizeof(arr) / sizeof(arr[0]));

    return 0;
}

void Reverse_Words(int arr[], int length)
{
    for(int i = (length - 1); i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }   
}
