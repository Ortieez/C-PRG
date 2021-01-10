#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
    int day, hours, sum;
    printf("Enter days: ");
    scanf("%d", &day);
    printf("Enter hours: ");
    scanf("%d", &hours);

    day = day * 24;
    sum = day + hours;

    printf("Hours: %d", sum);

    return 0;
}