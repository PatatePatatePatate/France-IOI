#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int nbMarchands;
int prix;
int meilleurprix=1000000;
int numMarchand=0;
int meilleurmarchand=0;
scanf("%d", &nbMarchands);
repeat(nbMarchands)
{
    numMarchand++;
    scanf("%d", &prix);
    if (prix<=meilleurprix)
    {
        meilleurprix=prix;
        meilleurmarchand=numMarchand;
    }
        
}
printf("%d", meilleurmarchand);
}