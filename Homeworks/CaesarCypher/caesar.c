#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Worked on together: Daniel Vosátka, Adam Lipert

// Todo: Decode

void ceasar_encrypt(char *addr, char *offset)
{
    int i = 0, d = 0;

    while (*(addr + i) != '\0')
    {
        if (d > 2)
        {
            d = 0;
        }
        if ((int)*(addr + i) == 32)
        {
            i++;
            continue;
        }
        else
        {
            if (*(addr + i) >= 65 && *(addr + i) <= 90) // Capital letters
            {
                *(addr + i) += (int)*(offset + d) - 48;
                if (*(addr + i) > 90)
                {
                    *(addr + i) -= 26;
                }
            }
            if (*(addr + i) >= 97 && *(addr + i) <= 122) // Small letters
            {
                *(addr + i) += (int)*(offset + d) - 48;
                if (*(addr + i) > 122)
                {
                    *(addr + i) -= 26;
                }
            }
            if (*(addr + i) >= 48 && *(addr + i) <= 57) // Numbers
            {
                *(addr + i) += (int)*(offset + d) - 48;
                if (*(addr + i) > 57)
                {
                    *(addr + i) -= 9;
                }
            }
        }
        i++;
        d++;
    }
}
int main()
{
    char mess[] = "Ahoj Studenti 1IT!";
    char pass[3] = "123"; // Put only numbers inside, please. PS: Thanks, from the Devs
    printf("%s\n", mess);
    ceasar_encrypt(mess, pass);
    printf("%s\n", mess);
    return 0;
}
