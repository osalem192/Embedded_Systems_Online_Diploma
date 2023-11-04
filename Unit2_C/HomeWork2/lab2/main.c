#include <stdio.h>
	
int main()
{   
    char c;

    printf("enter analphabet: ");
	scanf("%c",&c);

	switch(c)
	{
	case('a'):
	case('A'):
	case('e'):
	case('E'):
	case('i'):
	case('I'):
	case('o'):
	case('O'):
	case('U'):
	case('u'): printf("%c is vowel", c);
	break;
	default: 
    printf("%c is consonant", c);
    }
    return 0;
}