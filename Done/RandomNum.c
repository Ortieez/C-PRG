#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0));
    int min = 30, max = 80;
    int num = (rand() % (max - min + 1)) + min;
    printf("%d", num);
}