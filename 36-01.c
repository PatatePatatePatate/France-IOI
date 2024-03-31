#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int base;
int quantite;
int nbr;
scanf("%d %d %d", &base, &quantite, &nbr);

printf("%d\n", base);
repeat(nbr)
    {
        base = base + quantite;
        printf("%d\n", base);
    }
return 0;
}