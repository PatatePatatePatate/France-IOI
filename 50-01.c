#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int jours;
int distance;
int distancemax=0;
scanf("%d", &jours);
repeat(jours)
{
    scanf("%d", &distance);
    if (distance>distancemax)
    {
        distancemax=distance;
    }
}
printf("%d\n", distancemax);    
}