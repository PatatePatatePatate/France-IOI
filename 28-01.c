#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int taille=17;
int somme=0;
int somme2=0;
repeat(9)
{
    somme=taille*taille*taille;
    somme2=somme2+somme;
    taille-=2;
}
printf("%d\n", somme2);

return 0;
}