#include "main.h"
/**
 * puts2 - good asdasdasdasda
 * @str: aisjdaisjdalksjdlkasjdkl
 * askjdkalksjdkaljsdlkaskd
 */
void puts2(char *str)
{
int i = 0;
int a = 0;
while (str[i] != '\0')
{
	i++;
}
i--;
while (a <= i)
{
	_putchar(str[a]);
	a=a+2;
}
_putchar('\n');
}
