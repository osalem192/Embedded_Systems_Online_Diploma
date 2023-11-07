#include <stdio.h>

int main() {
    char *ptr;

    ptr = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while (*ptr != '\0')
    {
        printf("%c  ", *ptr);
        ptr++;
    }

    return 0;
}
