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
va_list args;
const char *x = format;
char c;
int i;
float f;
char *s;
va_start(args, x);
while (*x) {
if (*x == 'c')
{
c = va_arg(args, int);
printf("%c", c);
}
else if (*x == 'i')
{
i = va_arg(args, int);
printf("%d", i);
}
else if (*x == 'f')
{
f = va_arg(args, double);
printf("%f", f);
}
else if (*x == 's')
{
s = va_arg(args, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
}
x++;
}
printf("\n");
va_end(args);
}
