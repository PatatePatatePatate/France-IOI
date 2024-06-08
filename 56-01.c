#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int intervale1;
int intervale2;
int nbr;
int tmpsarrivee;
int nbrespion=0;
scanf("%d %d %d", &intervale1, &intervale2, &nbr);

repeat(nbr)
{
scanf("%d", &tmpsarrivee);
if (tmpsarrivee >= intervale1 && tmpsarrivee <= intervale2)
{
    nbrespion++;
}
}
printf("%d\n", nbrespion);
}