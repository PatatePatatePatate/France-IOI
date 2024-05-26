#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int age;
int bagages;
scanf("%d", &age);
scanf("%d", &bagages);

if (age == 60)
{
    printf("%d", 0);
    return 0;
}
if (age < 10)
{
    printf("%d", 5);
    return 0;
}
else if (bagages >= 20)
{
    printf("%d", 40);
    return 0;

}
else
{
    printf("%d", 30);
    return 0;
}
}