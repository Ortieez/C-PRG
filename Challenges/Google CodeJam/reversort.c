#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// NEFUNGUJE
int main()
{
    int C, l, cost; // C is number of tests
    int array[100];
    scanf("%d", &C);
    for (int x = 0; x < C; ++x) // the reversort will go C times
    {
        scanf("%d", &l);
        for (int j = 0; j < l; ++j)
        {
            scanf("%d", &array[j]); // fill the array
        }
        cost = 0;
        for (int i = 0; i < l; ++i)
        {
            int min_pos = i;
            for (int z = i; z < l; ++z)
            {
                if (array[z] < array[min_pos])
                {
                    min_pos = z;
                }
                if (i != z) // now swapping the elements only if we need to
                {
                    int tmp = array[i];
                    array[i] = array[z];
                    array[z] = tmp;
                    cost += 1;
                }
            }
        }
        printf("Case #%d: %d\n", C + 1, cost);
    }
}