#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int heure;
scanf("%d", &heure);

if (heure*5+10>53)
{
    printf("%d\n", 53);
}
else
    printf("%d\n", heure*5+10);
return 0;
}