#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
    int x = 1;
    int y = 1;

    repeat(20)
    {
        repeat(20)
        {
            printf("%d ", x * y);
            y++;
        }
        printf("\n");
        x++;
        y = 1;
    }
    return 0;
}