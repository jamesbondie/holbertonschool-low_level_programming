#include "main.h"
/**
 * puts_half - good asdasdasdasda
 * @str: aisjdaisjdalksjdlkasjdkl
 * askjdkalksjdkaljsdlkaskd
 */
void puts_half(char *str)
{
int len = 0;
int n;
while (str[len] != '\0')
{
	len++;
}
len--;
n = ( len - 1 ) / 2;
while (n <= len)
{
	_putchar(str[n]);
	n++;
}
_putchar('\n');
}
