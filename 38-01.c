#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int max;
int min;
int somme=0;
scanf("%d %d", &max, &min);

repeat(max-min+1)
{
    somme = somme+max*max;
    max--;
}
printf("%d\n", somme);
return 0;
}