
#include <stdio.h>

typedef struct sComplex_no
{
    float real;
    float imaginary;
}sComplex;

sComplex Sum(sComplex *ptr1, sComplex *ptr2);

int main()
{
    sComplex no1, no2, sum;

    printf("for 1st complex no\n");
    printf("enter real and imaginary respectively: ");
    scanf("%f %f", &no1.real, &no1.imaginary);

    printf("for 2nd complex no\n");
    printf("enter real and imaginary respectively: ");
    scanf("%f %f", &no2.real, &no2.imaginary);

    sum = Sum(&no1, &no2);
    printf ("sum = %f + %fi", sum.real, sum.imaginary);

    return 0;
}

sComplex Sum(sComplex *ptr1, sComplex *ptr2)
{
    sComplex sum;
    sum.real = ptr1->real + ptr2->real;
    sum.imaginary = ptr1->imaginary + ptr2->imaginary;

    return sum;

}
