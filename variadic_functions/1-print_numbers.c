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
va_list args;
va_start(args, n);
while (i < n)
{
printf("%d", va_arg(args, int));
if (i < n - 1)
{
if (separator != NULL)
printf("%s", separator);
}
i++;
}
printf("\n");
va_end(args);
}
