#include "main.h"
/**
 * clear_bit - it deletes another bits
 * @n: number
 * @index: index of index
 *
 * Return: negative or positive
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x = sizeof(*n) * 8;
if (index < x)
{
*n &= ~(1 << index);
return (1);
}
return (-1);
}
