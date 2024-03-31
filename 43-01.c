#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int arignon;
int evaran;
scanf("%d", &arignon);
scanf("%d", &evaran);

if (arignon-evaran>10)
{
    printf("La famille Arignon a un champ trop grand");
}

if (evaran-arignon>10)
{
    printf("La famille Evaran a un champ trop grand");
}

return 0;
}

