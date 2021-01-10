#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
    for (int j = 0; j < 4; j++)
    {
        for (int i = 0; i < 8; i++)
        {
            if (i % 2 == 0)
            {
                printf("0");
            } else {
                printf("1");
            }
        }
        printf("\n");
        for (int k = 0; k < 8; k++)
        {
            if (k % 2 == 1)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}