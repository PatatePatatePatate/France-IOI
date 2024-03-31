#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int de1;
int de2;
scanf("%d", &de1);
scanf("%d", &de2);

if (de1+de2 >=10)
{
    printf("Taxe spéciale !\n");
    printf("%d", 36);
}
else
{
    printf("Taxe régulière\n");
    printf("%d", (de1+de2)*2);
}
return 0;
}