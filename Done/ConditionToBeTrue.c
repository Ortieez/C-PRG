#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
    int x, y, check;
    printf("4x + 3 < 5y – 1\n");
    printf("Input x: ");
    scanf("%d", &x);
    printf("Input y: ");
    scanf("%d", &y);

    if ((4 * x + 3) < (5 * y - 1))
    {
        printf("Condition is true.");
    } else {
        printf("Condition is false.");
    }

    return 0;
}