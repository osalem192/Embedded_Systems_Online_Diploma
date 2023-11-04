#include <stdio.h>
#include <string.h>

int main()
{
    char string [100], string2[100];
    char c, counter = 0;
    char *ptr = string;

    printf("please enter string: ");
    gets(string);


    while((*ptr) != 0)
    {
        counter ++;
        ptr ++;
    }
    printf("string in reverse is: ");
    
    for(char i = counter; i >= 0; i--)
    {
        printf("%c", string[i]);
    }

    return 0;
}