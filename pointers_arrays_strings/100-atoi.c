#include "main.h"
/**
 * _atoi - good asdasdasdasda
 * @s: aisjdaisjdalksjdlkasjdkl
 * askjdkalksjdkaljsdlkaskd
 * Return: alksjdalksjdlkasjdlkajkl
 */
int _atoi(char *s)
{
int a = 1;
int n = 0;
while (*s && (*s < '0' || *s > '9'))
{
if (*s == '-')
{
a *= -1;
s++;
}
}
while (*s && (*s >= '0' && *s <= '9'))
{
n = n * 10 + (*s - '0');
s++;
}
return a * n;
}
