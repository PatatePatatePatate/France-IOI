#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int add=1;
int total=0;
repeat(50)
{
total=total+add;
add++;
printf("%d\n",total);
}
return 0;
}