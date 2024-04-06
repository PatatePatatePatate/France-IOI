#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int nbr;
int altitude;
int descentetotale = 0;
int monteetotale = 0;
scanf("%d", &nbr);
repeat(nbr)
{
    scanf("%d", &altitude);
    if (altitude < 0)
    {
        descentetotale = descentetotale - altitude;
    }
    else if (altitude > 0)
    {
        monteetotale = monteetotale + altitude;
    }
}
printf("%d\n", monteetotale);
printf("%d\n", descentetotale);
}