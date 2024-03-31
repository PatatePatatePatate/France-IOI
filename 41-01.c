#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int borne1, borne2;
scanf("%d %d", &borne1, &borne2);
if (borne1 > borne2)
{
    printf("%d\n", borne1-borne2);
}

else if (borne1 <= borne2)

{
    printf("%d\n", borne2-borne1);
}
return 0;
}