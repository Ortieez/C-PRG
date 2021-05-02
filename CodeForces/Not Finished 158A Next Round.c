#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, k;
    int scores[100] = {};
    int output = 0;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
        if (scores[i] == 1)
        {
            output += 1;
        }
        else if (scores[i] > scores[i + 1] && scores[i] > k)
        {
            output += 1;
        }
    }
    printf("%d", output);

    return 0;
}

// Input

//    5 1

//  1 1 1 1 1

//   Output

//  0

//    Answer

//    5

//    Checker Log

///        wrong answer 1st numbers differ -
//    expected : '5',
//    found : '0'
