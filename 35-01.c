#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int nbr;
int nbr2=0;
int total=66;
scanf("%d", &nbr);

repeat(nbr)
    {
        nbr2++;
        total=total*nbr2;
        printf("%d\n", total);
    }
return 0;
}