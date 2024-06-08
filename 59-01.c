#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int garde1debut;
int garde1fin;
int garde2debut;
int garde2fin;
int num=0;
scanf("%d %d %d %d", &garde1debut, &garde1fin, &garde2debut, &garde2fin);   
if (garde1debut >= garde2debut && garde1debut <= garde2fin)
{
    num++;
}
if (garde1fin >= garde2debut && garde1fin <= garde2fin)
{
    num++;
}
if (garde2debut >= garde1debut && garde2debut <= garde1fin)
{
    num++;
}
if (garde2fin >= garde1debut && garde2fin <= garde1fin)
{
    num++;
}
if (num>0)
{
    printf("Amis\n");
}
else
{
    printf("Pas amis\n");
}
}