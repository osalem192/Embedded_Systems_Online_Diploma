#include <stdio.h>
typedef struct sDist{
    float inch;
    int   feet;
}sDist;

int main()
{
    sDist dist1, dist2, sum;
    printf("Enter information for 1st distance:\n");

    printf("Enter feet: ");
    scanf("%d", &dist1.feet);
    printf("Enter inch: ");
    scanf("%f", &dist1.inch);

    printf("Enter information for 2nd distance:\n");

    printf("Enter feet: ");
    scanf("%d", &dist2.feet);
    printf("Enter inch: ");
    scanf("%f", &dist2.inch);

    sum.feet = dist1.feet + dist2.feet;
    sum.inch = dist1.inch + dist2.inch;

    if(sum.inch > 12)
    {
        sum.inch = sum.inch - 12;
        sum.feet ++;
    }

    printf("Sum of distance = %d' - %f\"", sum.feet, sum.inch);
    return 0;
}