#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int trojuhelnik(int h)
{
    for (int i = 1; i <= h; i++)
    {
        for (int k = h; i <= k; k--)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {

            printf("* ");
        }

        printf("\n");
    }
}

int main()
{
    int h;
    printf("How big is h (height): ");
    scanf("%d", &h);
    trojuhelnik(h);
    return 0;
}