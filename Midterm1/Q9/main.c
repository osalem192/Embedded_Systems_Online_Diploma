#include <stdio.h>

void Reverse_Words(char str[]);

int main()
{   
    char arr[]= "omar ahmed";
    Reverse_Words(arr);

    return 0;
}

void Reverse_Words(char str[])
{   
    int count1 = 0;
    while(str[count1] != '\0')
    {
        count1 ++;
        if(str[count1] == ' ')
        {   
            printf("%s ", (str + count1));
            str[count1] = '\0';
        }
    }
    printf("%s", str);
}
