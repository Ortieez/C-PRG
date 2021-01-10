#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    for (i = 1; i <= 1024; i++)
    {
        printf("%d^2 = %d\n", i, (int)pow(i, 2));
    }
}