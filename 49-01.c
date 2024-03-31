#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int nbr;
int posx;
int posy;
int xmin=1000000;
int xmax=0;
int ymin=1000000;
int ymax=0;
scanf("%d", &nbr);
repeat(nbr)
{
    scanf("%d", &posx);
    scanf("%d", &posy);
    if(posx < xmin)
    {
        xmin = posx;
    }
    if(posx > xmax)
    {
        xmax = posx;
    }
    if(posy < ymin)
    {
        ymin = posy;
    }
    if(posy > ymax)
    {
        ymax = posy;
    }
}
printf("%d", (xmax - xmin) * 2 + (ymax - ymin) * 2);
}