#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int nbr;
int somme=0;

repeat(20)
{
    scanf("%d",&nbr);
    somme=somme+nbr;
}

printf("%d\n",somme);
return 0;
}