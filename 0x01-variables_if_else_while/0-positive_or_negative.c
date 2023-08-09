#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* int main(void): the main function is to print random numbers
* n: is a random number
* return (0): always success
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
{
if (n > 0)
printf("%d: is positive\n", n);
}
{
if (n == 0)
printf("%d: is zero\n", n);
}
{
if (n < 0)
printf("%d: is negative\n", n);
}
return (0);
}
