#include "main.h"
#include <stddef.h>
/**
 * _strspn - good asdasdasdasda
 * aisjdaisjdalksjdlkasjdkl
 * @s: askjdkalksjdkaljsdlkaskd
 * @accept: aksjdkjasdjka
 * Return: alksjdalksjdlkasjdlkajkl
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j = 0;
int c = 0;
while (s[i] != '\0')
{
if (s[i] == ' ')
break;
j = 0;
while (accept[j] != '\0')
{
if (s[i] == accept[j])
c++;
j++;
}
i++;
}
return (c);
}
