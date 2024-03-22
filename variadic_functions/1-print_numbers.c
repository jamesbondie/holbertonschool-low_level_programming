#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - my beautiful function
 * @separator: okai okai, lemme guess how long i am
 * @n: oaisdjaoisjdoaisjdoiasjdioj
 * Return: asdaskdahsjdasjkd
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list x;
va_list y;
va_start(x, n);
va_start(y, separator);
while (i < n)
printf(va_arg(x, n));
printf(va_arg(y, separator));
i++;
}
va_end(x);
va_end(y);
}
