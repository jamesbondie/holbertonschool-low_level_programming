#include "main.h"
/**
 * flip_bits - flips it
 * @n: number
 * @m: number2
 *
 * Return: flipflop
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int x = 0;
n = n ^ m;
while (n)
{
x += n & 1;
n >>= 1;
}
return (x);
}
