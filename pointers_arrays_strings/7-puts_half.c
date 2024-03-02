#include "main.h"
/**
 * puts_half - good asdasdasdasda
 * @str: aisjdaisjdalksjdlkasjdkl
 * askjdkalksjdkaljsdlkaskd
 */
void puts_half(char *str)
{
int len = 0;
int n = ( len - 1 ) / 2;
int a = 0;
while (str[len] != '\0')
{
	len++;
}
len--;

while (n <= len)
{
	_putchar(str[a]);
	n++;
}
_putchar('\n');
}
