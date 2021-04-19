#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
/* This program creates a file with the username as a file name and puts the username inside the file. */
int main(int argc, char **argv)
{
    FILE *f;
    char UserName[250];
    char UserFile[255];
    printf("Your username (do not use spaces or special characters): ");
    scanf("%s", UserName);
    sprintf(UserFile, "%s.txt", UserName);
    f = fopen(UserFile, "w");
    for (int i = 0; i < sizeof(UserName); i++)
    {
        if (isalpha(UserName[i]))
        {
            fprintf(f, "%c", UserName[i]);
        }
        else
        {
            fclose(f);
            break;
        }
    }
    return 0;
}