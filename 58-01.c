#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int num;
scanf("%d", &num);
if(num==1 || num==2 || num==3 || num==7 || num==8 || num==9)
{
    printf("30\n");
}
else if (num==4 || num==5 || num==6 || num==10)
{
    printf("31\n");
}
else
{
    printf("29\n");
}
}