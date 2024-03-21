#include <stdarg.h>

/**
 * sum_them_all - my beautiful function
 * @n: okai okai, lemme guess how long i am
 *
 *
 */






int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
int sum = 0;
va_list x;
va_start(x, n);
while (i < n)
{
sum += va_arg(x, unsigned int);
i++;
}
va_end(x);
return (sum);
}
