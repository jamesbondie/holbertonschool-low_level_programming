#include "main.h"

/**
 * _pow_recursion - check the code
 * @x: askdasda
 * @y: sdasd
 * Return: Always 0.
 */

int mani(int n, int tahir)
{
if (tahir * tahir == n)
{
return (tahir);
}
else if (tahir * tahir > n)
{
return (-1);
}
else
{
return (mani(n, tahir + 1));
}
}
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (mani(n, 0));
}

