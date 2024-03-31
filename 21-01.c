#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int taille = (5*17)+(2*7)+5+(2*2);

printf("%d\n", taille*taille);
printf("%d\n", taille*4);
return 0;
}