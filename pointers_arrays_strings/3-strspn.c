#include "main.h"
#include <stddef.h>
/**
 * _strchr - good asdasdasdasda
 * aisjdaisjdalksjdlkasjdkl
 * @s: askjdkalksjdkaljsdlkaskd
 * @c: aksjdkjasdjka
 * Return: alksjdalksjdlkasjdlkajkl
 */
unsigned int _strspn(char *s, char *accept)
{
int x = 0;
int b;
int c = 0;
while (s[x] != '\0')
{
b = 0;
while (accept[b] != ' ')
{
if (s[x] == accept[b])
{
c++;
break;
}
b++;		
}
x++;
}
return (c);
}
