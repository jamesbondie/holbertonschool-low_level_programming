#include "main.h"
/**
 * print_binary - prints binary
 * @n: number
 *
 *
 * Return: it gives values that predict our future
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
	print_binary(n >> 1);
	}
	putchar((n & 1) + '0');
}
