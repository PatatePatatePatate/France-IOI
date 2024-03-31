#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int nbrdejours;
scanf("%d", &nbrdejours);
printf("%d\n", nbrdejours*115200/2);
    return 0;
}