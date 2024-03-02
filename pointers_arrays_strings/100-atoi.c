#include "main.h"
/**
 * _atoi - good asdasdasdasda
 * @s: aisjdaisjdalksjdlkasjdkl
 * askjdkalksjdkaljsdlkaskd
 * Return: alksjdalksjdlkasjdlkajkl
 */
int _atoi(char *s)
{
int x = 1;
unsigned int y = 0;
int z = 0;
for (; *s != '\0'; s++)
{
if (*s == '-')
x *= -1;
else if (*s >= '0' && *s <= '9')
break;
}
while (*s >= '0' && *s <= '9')
{
y *= 10;
y += *s - '0';
s++;
}
if (x == -1)
z = -y;
else
z = y;
return (z);
}
