#include "main.h"
/**
 * _strncpy - good asdasdasdasda
 * @dest: aisjdaisjdalksjdlkasjdkl
 * @src: askjdkalksjdkaljsdlkaskd
 * @n: alskdaskldaklsdkalsdaks
 * Return: alksjdalksjdlkasjdlkajkl
 */
char *_strncpy(char *dest, char *src, int n)
{
int lens = 0;
while (src[lens] && lens < n)
{
dest[lens] = src[lens];
lens++;
}
if (src[lens] != '\0')
{
dest[lens] = '\0';
}
return (dest);
}
