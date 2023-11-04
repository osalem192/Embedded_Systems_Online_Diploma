#include <stdio.h>

int main()
{   
    char c;
	printf("Enter a character: ");
	scanf("%c", &c);

	switch(c)
	{
	case 'a' ... 'z':
	case 'A'... 'Z': printf("%c is alphabet", c);
	break;
	default: printf("%c is not an alphabet", c);
	}
    return 0;
}