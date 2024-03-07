#include "main.h"
/**
 * _memset - good asdasdasdasda
 * @b: aisjdaisjdalksjdlkasjdkl
 * @s: askjdkalksjdkaljsdlkaskd
 * @n: aksjdkjasdjka
 * Return: alksjdalksjdlkasjdlkajkl
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int c = 0;
char *blabla = s;
while (c < n)
{
*s++ = b;
c++;
}
return (blabla);
}
