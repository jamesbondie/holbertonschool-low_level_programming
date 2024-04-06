#include "main.h"
/**
 * set_bit - it sets our bit
 * @n: num
 * @index: it is our index
 *
 * Return: it returns end answer
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x = sizeof(*n) * 8;
if (index < x)
{
*n |= 1 << index;
return (1);
}
return (-1);
}
