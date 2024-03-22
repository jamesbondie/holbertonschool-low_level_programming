#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - my beautiful function
 * @format: okai okai, lemme guess how long i am
 * oaisdjaoisjdoaisjdoiasjdioj
 * Return: asdaskdahsjdasjkd
 */

void print_all(const char * const format, ...)
{
int x = 0;
char *s;
va_list d;
va_start(d, format);
while (format && format[x])
{
default:
continue;
switch (format[x++])
{
case 'c':
printf("%c", va_arg(d, int));
break;
case 'i':
printf("%d", va_arg(d, int));
break;
case 'f':
printf("%f", va_arg(d, double));
break;
case 's':
s = va_arg(d, char*);
if (s == NULL)
s = "(nil)";
printf("%s", s);
break;
}
if (format[x])
printf(", ");
}
va_end(d);
printf("\n");
}
