#include <stdio.h>

int Sum_1to100();

int main()
{   
    printf("sum from 1 to 100 = %d",Sum_1to100());

    return 0;
}

int Sum_1to100()
{   
    // by using formula: n * (n + 1) / 2;
    return 100 * (100 + 1) / 2;
}
