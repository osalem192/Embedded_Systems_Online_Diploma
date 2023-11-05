#include <stdio.h>

int Power_of_Number(int base, int power);


int main()
{
    int base, power;
    printf("please enter the base number: ");
    scanf("%d", &base);

    printf("please enter the power number(positive int): ");
    scanf("%d", &power);

    printf("%d ^ %d = %d", base, power, Power_of_Number(base,power));

    return 0;
}

int Power_of_Number(int base, int power)
{
	if(power != 0)
    {
        return (base * (Power_of_Number(base, power -1)));
    }
    else
    {
        return 1;
    }
}