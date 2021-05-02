#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int laneSwitch = 0;

float generate_items(float *inputArr, int arrSize)
{
    srand(time(0));
    for (int i = 0; i < arrSize; i++)
    {
        inputArr[i] = rand() / 10000000. + (rand() / 10000000) % 5 - 1;
    }
    return *inputArr;
}

void show_items(float *inputArr, int arrSize)
{
    if (laneSwitch == 0)
    {
        printf("Before rounding numbers:\n");
    }
    else
    {
        printf("After rounding numbers:\n");
    }

    for (int i = 0; i < arrSize; i++)
        printf("[%d]\t%.2f\n", i, inputArr[i]);
}

float round_items(float *inputArr, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
        inputArr[i] = floor(inputArr[i] * 10 + 0.5) / 10;

    laneSwitch = 1;
    show_items(inputArr, arrSize);
    return *inputArr;
}

int main()
{
    float arr[10] = {};
    generate_items(arr, 10);
    show_items(arr, 10);
    round_items(arr, 10);
}
