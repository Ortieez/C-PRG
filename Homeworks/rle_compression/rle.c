#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rleCompression(char *toCompress)
{
    int len = strlen(toCompress);
    int counter = 1;
    for (int i = 0; i < len; i++)
    {
        if ((int)toCompress[i] == (int)toCompress[i + 1] && toCompress[i] != '\0')
        {
            counter++;
        }
        else
        {
            printf("%i%c", counter, toCompress[i]);
            counter = 1;
        }
    }
    printf("\n");
}

int main()
{
    char firstRun[] = {"HELLOOOO"}; // 1H1E2L4O
    char secondRun[] = {"AAAAABB"}; // 5A2B
    for (int i = 1; i <= 2; i++)
    {
        if (i == 1)
        {
            printf("Before RLE: %s\n", firstRun);
            rleCompression(firstRun);
        }
        else
        {
            printf("Before RLE: %s\n", secondRun);
            rleCompression(secondRun);
        }
    }

    return 0;
}