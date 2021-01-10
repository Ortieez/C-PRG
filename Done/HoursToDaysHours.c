#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int hours, sum, days = 0;
    printf("Enter hours: ");
    scanf("%d", &hours);
    while (hours > 23)
    {
        hours = hours - 24;
        days++;
    }
    printf("Days: %d, Hours: %d", days, hours);

    return 0;
}