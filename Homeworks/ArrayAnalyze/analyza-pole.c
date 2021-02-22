#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int minmax(int *arr, int size)
{
    int minposition = 0, minvalue = arr[minposition];
    int maxposition = 0, maxvalue = arr[maxposition];
    int position = 0, num = arr[position];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minvalue)
        {
            minvalue = arr[i];
            minposition = i;
        }
        if (arr[i] > maxvalue)
        {
            maxvalue = arr[i];
            maxposition = i;
        }
    }
    printf("Minimal Value in array => [%i => %03i]\n", minposition, minvalue);
    printf("Maximum Value in array => [%i => %03i]\n", maxposition, maxvalue);

    int x = 0;
    for (int i = 0; i < size; i++)
    {
        x += arr[i];
        position = i;
    }
    float z = (x - (maxvalue + minvalue)) / (float)size;
    printf("Average number of this array without min and max is => %.2f\n", z);
}

int countAll(int *arr, int size)
{
    int position = 0, num = arr[position], x = 0;

    for (int i = 0; i < size; i++)
    {
        x = x + arr[i];
    }
    printf("Sum of this array is => %i\n", x);

    float y = (float)x / (float)size;
    printf("Average number of this array is => %.2f\n", y);

    // printf("Average number of this array without min and max is => %.2f\n", z);
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
    countAll(array, sizeof(array) / 4);

    return 0;
}