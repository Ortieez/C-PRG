#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int minmax(int *arr, int size)
{
    int position = 0, value = arr[position];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < value)
        {
            value = arr[i];
            position = i;
        }
    }
    printf("Minimal Value in array => [%i => %03i]\n", position, value);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > value)
        {
            value = arr[i];
            position = i;
        }
    }
    printf("Maximum Value in array => [%i => %03i]\n", position, value);
}

int main()
{
    // Generate
    int array[5], x;
    srand(time(0));
    for (int i = 0; i < sizeof(array) / 4; i++)
    {
        x = rand() / 10000000;
        array[i] = x;

        // Printing in terminal
        printf("[%i => %03i]\n", i, array[i]);
    }

    // Analyze
    minmax(array, sizeof(array) / 4);

    return 0;
}