#include <stdio.h>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)
int main()
{
int longu=1;
repeat(10)
{
repeat(longu)
{
   droite(); 
}
ramasser();
repeat(longu)
 {
   gauche();
 }
 deposer();
 longu++;
}

return 0;
}