/*
 * asdasdasdc
 * SAsdasdwadn
 */

#include "main.h"

/**
 * times_table - dasdasdjaslkjdlajskldjalk
 * Return: dasdasdasdrwiseasdasdasdas
 * times_table - asdfsdfasdfasfdsfdsf
 */
void times_table(void)
{
int b = 0, c, d;
while (b <= 9)
{
c = 0;
while (c <= 9)
{
d = (b * c);
if (c != 0)
{
_putchar(',');
_putchar(' ');
}
if (d >= 10)
{
_putchar((d / 10) + '0');
_putchar((d % 10) + '0');
}
else if (d < 10 && c != 0)
{
_putchar(' ');
_putchar((d % 10) + '0');
}
else
_putchar((d % 10) + '0');
c++;
}
_putchar('\n');
b++;
}
}
