#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int nbr;
int habitant;
int quantite=0;
scanf("%d", &nbr);

repeat(nbr)
{
    scanf("%d", &habitant);
    if(habitant>10000)
    {
        quantite++;
    }
}
printf("%d\n", quantite);
return 0;
}