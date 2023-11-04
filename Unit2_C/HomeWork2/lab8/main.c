#include <stdio.h>

int main()
{
    char op;
    float num1, num2;
    printf("Enter operator either +, -, * or / : ");
	scanf("%c", &op);
	printf("Enter two operands: ");
	scanf("%f %f", &num1, &num2);
	switch(op)
	{
	case'+': printf("%f + %f = %f", num1, num2 , num1 + num2);
	break;
	case'-': printf("%f - %f = %f", num1, num2 , num1 - num2);
	break;
	case'*': printf("%f * %f = %f", num1, num2 , num1 * num2);
	break;
	case'/': printf("%f / %f = %f", num1, num2 , num1 / num2);
	break;
	default:;
	}
    return 0;
}