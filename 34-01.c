#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int tempmin,tempmax;
int temp=0;
scanf("%d %d",&tempmin,&tempmax);

repeat(tempmax-tempmin+1)
    {
        printf("%d\n",tempmin);
        tempmin++;
    }
return 0;
}