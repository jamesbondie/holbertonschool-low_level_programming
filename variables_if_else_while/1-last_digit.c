#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: 'the program's description'
 * parameter: describe the parameter
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int nd;
nd = fabs(n % 10);
printf("Last digit of %d is %d ", n, nd);
/* your code goes there */
if (nd > 5)
{
printf("and is greater than 5\n");
}
else if (nd == 0)
{
printf("and is 0\n");
}
else if (nd < 6 && nd != 0)
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
