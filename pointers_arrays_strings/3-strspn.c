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
int b = 0;
while (s[x] != '\0')
{
while (s[b] != ' ')
{
if (s[x] == accept[b])
{
b++;
}
b++;		
}
x++;
}
b--;
return (b);
}
