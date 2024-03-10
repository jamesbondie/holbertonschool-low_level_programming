#include "main.h"

/**
 * prime - ihihiuijoijoj
 * _sqrt_recursion - check the code
 * mani - ojiojoijoijoij
 * @n: askdasda
 * @i: asdasdsdasd
 * mani - njknkjnkjnkjn
 * Return: Always 0.
 */

int prime(int n, int i)
{
if (n == i)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
return (prime(n, i + 1));
}
/**
 * is_prime_number - check the code
 * mani - ojiojoijoijoij
 * @n: askdasda
 * sdasd
 * mani - njknkjnkjnkjn
 * Return: Always 0.
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (prime(n, 2));
}
