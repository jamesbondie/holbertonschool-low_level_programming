/*
 * main - Entry point
 * Description: 'the program's description'
 * @parameter: descri
 * * Return: Always 0 (Success)
 */
#include "main.h"
/**
 * print_diagonal - dasdasdasdasdeasd
 * @n: asdasdasdasdasdasdasdadsdasd
 *  adlskdjalksdjalksjdlaksjdlkas
 * Return: dasdasdasdrwiseasdasdasdas
 */
void print_diagonal(int n)
{
int x = 0;
int i = 0;
if (n > 0)
{
while (x < n)
{
while (i < x)
{
i++;
_putchar(' ');
}
i = 0;
_putchar('\\');
_putchar('\n');
x++;
}
}
else
{
_putchar('\n');
}
}
