#include <stdio.h>
#include <string.h>

void Reverse_text(char *string, int index, int string_length);

int main()
{
    char string[100];
    int string_length;
    printf("please enter the text to reverse: ");
    gets(string);
    string_length = strlen(string);
    Reverse_text(string, 0, string_length);

    return 0;
}

void Reverse_text(char *string, int index, int string_length)
{
    if(index == string_length)
    {
        return 1;
    }
    else
    {
        char string2 = string[index];
        Reverse_text(string, index + 1, string_length);
        printf("%c", string2);
    }
}