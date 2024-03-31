#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int age;
scanf("%d", &age);

if (age >=21)
{
    printf("Tarif plein");
}
else
{
    printf("Tarif réduit");
}
return 0;
}