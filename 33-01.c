#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int nbr;
scanf("%d", &nbr);

repeat(nbr)
    {
    printf("Je dois suivre en cours\n");
    }
return 0;
}