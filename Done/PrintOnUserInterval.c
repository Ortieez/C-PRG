#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
    int userInput = 0;
    printf("Set a ending integer: ");
    scanf("%d", &userInput);
    printf("\n");
    for (int i = 1; i <= userInput; i++)
    {
        if (i < userInput)
        {
            printf("%d,", i);
        } else {
            printf("%d", i);
        }
    }

    return 0;
}