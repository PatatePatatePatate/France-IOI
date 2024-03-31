#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int nbr=1;

repeat(100)
{
printf("%d\n", nbr);
nbr++;
}
printf("J'arrive !");
return 0;
}