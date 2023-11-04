#include <stdio.h>
#include <string.h>

int main()
{
    char string [100];
    char counter = 0;
    char *ptr = string;

    printf("please enter string: ");
    gets(string);

    while((*ptr) != 0)
    {
        counter ++;
        ptr ++;
    }
    printf("length of string = %d", counter);

    return 0;
}