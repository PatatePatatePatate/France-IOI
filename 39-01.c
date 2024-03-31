#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int nbr;
scanf("%d", &nbr);

repeat(nbr)
{
    int poids;
    int age;
    int longueur;
    int hauteur;
    scanf("%d %d %d %d", &poids, &age, &longueur, &hauteur);
    printf("%d\n", longueur * hauteur + poids);
}
return 0;
}