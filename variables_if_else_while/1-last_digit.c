#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
printf("Last digit of\n%dis", n);
/* your code goes there */
if (n % 10 > 5)
{
printf("and is greater than 5\n");
}
else if (n % 10 == 0)
{
printf("and is greater than 5\n");
}
else if (n % 10 < 6 && n % 10 != 0)
{
printf("and is greater than 5\n");
}
return (0);
}
