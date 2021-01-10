#include <stdio.h>
#include <math.h>

int main() {
    int i, j;
    for (i = 1; i <= 1024; i++)
    {
        j = i * i;
        printf("%d^2 = %d\n", i, j);
    }
}