#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int code;
scanf("%d", &code);

if (code == 64741)
{
    printf("Bon festin !");
}
else
{
printf("Allez-vous en !");
}
return 0;
}