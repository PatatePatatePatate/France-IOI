#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int nbr;
int poids;
scanf("%d", &nbr);
scanf("%d", &poids);

if (nbr*poids>105)
{
    printf("Surcharge !\n");
}
return 0;
}