#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 12;
    int *p = &x;
    *p = *p + 30;

    printf("%x\n", p);
    printf("%i\n", x);

    return 0;
}