#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int divisionwithoutmodulus(int n, int divider)
{
    if (divider == 0 || n == 0)
    {
        printf("You cannot divide with 0 or divide 0.");
        return 0;
    }

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
    divisionwithoutmodulus(50, 0);
    return 0;
}