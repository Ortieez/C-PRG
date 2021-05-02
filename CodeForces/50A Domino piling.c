#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int M, N; // m = height, n = width
    scanf("%d %d", &M, &N);
    int sSquare = M * N;
    int sDominoe = 2;
    int numberOfDominoes = sSquare / sDominoe;
    printf("%d", numberOfDominoes);

    return 0;
}