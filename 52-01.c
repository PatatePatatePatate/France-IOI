#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int taille;
int nbrfeuilles;
scanf("%d", &taille);
scanf("%d", &nbrfeuilles);
if(nbrfeuilles>=10 && taille>=10)
{
    printf("Calaelen\n");
}
else if (taille>=12)
{
    printf("Dorthonion");
}
else if (nbrfeuilles>=8)
{
    printf("Tinuviel");
}
else 
{
    printf("Falarion");
}
}