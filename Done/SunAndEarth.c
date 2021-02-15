#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define PI 3.141592

// Kolik Zemí je potřeba jako korálky po obvodu Slunce?

int main()
{
    float earthRadius = 6378.;
    float earthCircumference = 40075.017;
    float sunCircumference = 4368176.853;
    float sunVolume = 1.41 * pow(10, 18);

    float earthVolume = (4 / 3) * PI * pow(earthRadius, 3);
    float earthSurface = 4 * PI * pow(earthRadius, 2);

    float earthInSun = sunVolume / earthVolume;
    printf("There can be %.2f earths in sun.\n", earthInSun);
    float earthInSunAsNecklace = sunCircumference / earthCircumference;
    printf("There can be %.f on sun-like necklace.", earthInSunAsNecklace);
    return 0;
}