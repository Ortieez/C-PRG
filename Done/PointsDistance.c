#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    float A[2] = {5., 1.};
    float B[2] = {-2., 18.};

    float x = A[0] - B[0];
    float y = A[1] - B[1];

    float z = sqrt(((x * x) + (y * y)));

    printf("The distance between points A and B is : %f", z);
    return 0;
}
