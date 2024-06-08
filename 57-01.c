#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int xmin;
int xmax;
int ymin;
int ymax;
int nbrmaisons;
int xmaison;
int ymaison;
int nbrespion=0;
scanf("%d %d %d %d %d", &xmin, &xmax, &ymin, &ymax, &nbrmaisons);
repeat(nbrmaisons)
{
    scanf("%d %d", &xmaison, &ymaison);
    if (xmaison >= xmin && xmaison <= xmax && ymaison >= ymin && ymaison <= ymax)
    {
        nbrespion++;
    }
}
printf("%d\n", nbrespion);
}