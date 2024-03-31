#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int nbr=100;

repeat(101)
{
    printf("%d\n", nbr);
    nbr--;
}
printf("Décollage !\n");

return 0;
}