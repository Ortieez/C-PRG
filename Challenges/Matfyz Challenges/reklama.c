#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int x, l, m, n;
    printf("Kolikrat to chcete spustit?\n");
    scanf("%i", &x);

    for (int i = 0; i < x; i++)
    {
        printf("Zadejte zisk s reklamou, zisk bez reklamy a cenu reklamy. Oddelujte to mezerou\n");
        scanf("%i %i %i", &l, &m, &n);
        printf("\n");

        int o = l - n;
        if (o < m)
        {
            printf("NE REKLAMA\n");
        }
        else
        {
            printf("REKLAMA\n");
        }
    }

    return 0;
}