#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int nbr=1337;
repeat(12)
{
nbr=nbr*2;
}
printf("%d\n",nbr);
return 0;
}