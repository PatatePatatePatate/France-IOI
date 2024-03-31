#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int nbr;
int equipe1=0;
int membre1;
int equipe2=0;
int membre2;
scanf("%d", &nbr);

repeat(nbr)
{
scanf("%d", &membre1);
scanf("%d", &membre2);
equipe1=equipe1+membre1;
equipe2=equipe2+membre2;
}
if (equipe1>equipe2)
{
    printf("L'équipe 1 a un avantage\n");
    printf("Poids total pour l'équipe 1 : %d\n", equipe1);
    printf("Poids total pour l'équipe 2 : %d\n", equipe2);
}
else if (equipe1<equipe2)
{
    printf("L'équipe 2 a un avantage\n");
    printf("Poids total pour l'équipe 1 : %d\n", equipe1);
    printf("Poids total pour l'équipe 2 : %d\n", equipe2);
}
return 0;
}