#include "main.h"
/**
 * _memcpy - good asdasdasdasda
 * @dest: aisjdaisjdalksjdlkasjdkl
 * @src: askjdkalksjdkaljsdlkaskd
 * @n: aksjdkjasdjka
 * Return: alksjdalksjdlkasjdlkajkl
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int c = 0;
char *blabla = dest;
while (c <= n)
{
*(dest + c) = *(src + c);
c++;
}
return (blabla);
}
