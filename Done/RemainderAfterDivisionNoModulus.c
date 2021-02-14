#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int divisionwithoutmodulus(int n, int divider)
{
    int remainder, division;
    // The division
    division = n / divider;
    // Getting the remainder
    remainder = n - (division * divider);
    // Print output
    printf("%i / %i = %i ... the remainder is %i", n, divider, division, remainder);
}

int main()
{
    divisionwithoutmodulus(50, 4);
    return 0;
}