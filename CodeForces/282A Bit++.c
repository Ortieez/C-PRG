#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, x = 0;
    int arrInput[3] = {};
    scanf("%d", &n);
    scanf("%c", &arrInput);
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 3; j++)
        {
        start:
            if (arrInput[j] == "+")
            {
                x++;
                break;
            }
            else if (arrInput[j] == "-")
            {
                x--;
                break;
            }
            else if (arrInput[j] == "X")
            {
                goto start;
            }
        }
    }
    printf("%d", x);
    return 0;
}