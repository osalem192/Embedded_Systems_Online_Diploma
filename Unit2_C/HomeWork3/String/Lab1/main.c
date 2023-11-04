#include <stdio.h>
#include <string.h>

int main()
{
    char string [100];
    char c, counter = 0;
    char *ptr = string;

    printf("please enter string: ");
    gets(string);

    printf("please enter the letter: ");
    scanf("%c", &c);

    while((*ptr) != 0)
    {
        if((*ptr) == c)
        {
            counter ++;
        }
        else{

        }
        ptr ++;
    }
    printf("Frequency of %c = %d", c, counter);

    return 0;
}