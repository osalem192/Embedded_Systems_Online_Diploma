#include <stdio.h>

int main()
{
    char string[100], counter = 0;
    char *ptr = string;
    printf("enter string to reverse: ");
    gets(string);

    while((*ptr != 0))
    {
        ptr ++;
        counter ++;
    }

    printf("string in reverse: ");
    for(counter; counter >= 0; counter --)
    {
        printf("%c", *ptr);
        ptr--;
    }
    return 0;
}