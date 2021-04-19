#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int rozdeleniPole(int velikostPole, int arr[])
{
    int i = arr[-1], j;
    int pivot = arr[velikostPole - 1];
    for (j = arr[0]; j < pivot; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }

    printf("\n%d", pivot);
}

int main()
{
    int array[5] = {10, 72, 73, 81, 88};
    rozdeleniPole(sizeof(array) / 4, array);
    // swap(&array[0], &array[4]);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}