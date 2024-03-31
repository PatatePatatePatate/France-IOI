#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
    int taille;
    scanf("%d", &taille);
    printf("%d\n", taille * taille * 23);
    return 0;
}