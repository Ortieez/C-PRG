#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("Pole 1:\n");
    srand(time(0));
    float pole[12];
    float pole2[11];
    for (int i = 0; i < sizeof(pole) / 4; i++)
    {
        float x = rand() % (int)(100 - 0 + 1) + 0;
        pole[i] = x - (x / 100 - 0.1 / 0.2);
        printf("%.2f\n", pole[i]);
    }
    printf("\n");
    printf("Pole 2: absolutni hodnoty rozdilu dvou sousednich prvku predchoziho pole\n");
    for (int i = 0; i < sizeof(pole2) / 4; i++)
    {
        float a, b, c;
        a = pole[i];
        b = pole[i + 1];
        pole2[i] = a - b;
        if (pole2[i] < 0)
        {
            pole2[i] *= -1;
        }

        printf("%.2f - %.2f = %.2f \n", a, b, pole2[i]);
    }

    return 0;
}