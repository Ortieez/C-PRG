#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int t, n, h;

    printf("Kolikrat chcete tento program spustit: ");
    scanf("%i", &t);
    printf("\n");
    for (int i = 0; i < t; i++)
    {
        printf("Kolik dnu dopredu vite: ");
        scanf("%i", &n);
        printf("\n");
        int predpoved[n];
        for (int j = 0; j < n; j++)
        {
            printf("Zadej teplotu %i dne: ", j + 1);
            scanf("%i", &h);
            predpoved[j] = h;
            printf("\n");
        }
        if (sizeof(predpoved) / 4 == 3)
        {
            qsort(predpoved, n, sizeof(int), cmpfunc);
            printf("%d\n", predpoved[n - 1]);
        }
        else
        {
        }
    }

    return 0;
}

// Start = 7:37 Pause = 8:30