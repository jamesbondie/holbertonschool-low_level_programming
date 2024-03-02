#include "main.h"
/**
 * _strncat - good asdasdasdasda
 * @dest: aisjdaisjdalksjdlkasjdkl
 * @src: askjdkalksjdkaljsdlkaskd
 * @n: alskdaskldaklsdkalsdaks
 * Return: alksjdalksjdlkasjdlkajkl
 */
char *_strncat(char *dest, char *src, int n)
{
int lend = 0;
int lens = 0;
while (dest[lend])
{
	lend++;
}
while (src[lens])
{
if (lens < n)
{
dest[lend+lens] = src[lens];
lens++;
}
}




return (dest);
}
