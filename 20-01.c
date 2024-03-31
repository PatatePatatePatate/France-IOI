#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int day=1;
int total = 2+34+6;

repeat(3)
{
    printf("%d ", total*day);
    day++;
}
return 0;
}