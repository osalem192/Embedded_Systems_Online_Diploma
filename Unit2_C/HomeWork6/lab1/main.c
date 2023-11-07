#include <stdio.h>

int main() 
{
    int m = 29, *ab;

    printf("address of m: 0x%x\n", &m );
    printf("value of m: %d\n\n", m);
   
    ab = &m;
    printf("now ab is assigned with address of m\n");
    printf("address of pointer ab: 0x%x\n", &ab);
    printf("content of pointer ab: %d\n\n", *ab);

    *ab = 34;
    printf("the value of m assigned to %d now\n",*ab);
    printf("address of pointer ab: 0x%x\n", &ab);
    printf("content of pointer ab: %d\n\n", *ab);

    *ab = 7;
    printf("The pointer variable ab is assigned with the value %d now\n",*ab);
    printf("address of m: 0x%x\n", &m);
    printf("value of m: %d\n", m);


    return 0;
}