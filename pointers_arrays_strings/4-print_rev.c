#include "main.h"
/**
 * print_rev - good asdasdasdasda
 * @s: aisjdaisjdalksjdlkasjdkl
 * askjdkalksjdkaljsdlkaskd
 */
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
while (i >= 1)
{
_putchar(s[i - 1]);
i--;
}
_putchar('\n');
}
