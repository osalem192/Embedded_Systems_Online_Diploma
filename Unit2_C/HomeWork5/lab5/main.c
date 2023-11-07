#include <stdio.h>

#define AREA(x)  3.14 * x *x

int main()
{
    float r, area;

    printf("enter the radius\n");
    scanf("%f", &r);
    area = AREA(r);
    printf("%f",area);

    return 0;
}
