#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int posactuelle;
int nbrvillage;
int posvillage;
int counter = 0;
scanf("%d", &posactuelle);
scanf("%d", &nbrvillage);
repeat(nbrvillage)
{
    scanf("%d", &posvillage);
    if(posvillage -50 <= posactuelle && posvillage + 50 >= posactuelle)
    {
        counter++;
    }
}
printf("%d\n", counter);
}