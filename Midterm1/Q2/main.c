#include <stdio.h>

double sqrt(int n);


int main() {
    int n = 4  ;
    double squareRoot = sqrt(n);
    printf("The square root of %d is %.3f\n", n, squareRoot);

    return 0;
}

double sqrt(int n) 
{
    if (n < 0) 
    {
        return -1;
    }
    double low = 0.0;
    double high = n;
    while (low <= high) 
    {
        double mid = (low + high) / 2.0;
        double square = mid * mid;

        if (square == n) 
        {
            return mid;
        } 
        else if (square < n) 
        {
            low = mid + 1.0e-15;
        } 
        else 
        {
            high = mid - 1.0e-15;
        }
    }

    return low;
}
