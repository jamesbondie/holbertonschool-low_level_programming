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
while (str[len])
{
	len++;
}
if (len % 2 != 0)
{
n = (len + 1) / 2;
}
else
{
n = len / 2;
}
while (n < len)
{
	_putchar(str[n]);
	n++;
}
_putchar('\n');
}
