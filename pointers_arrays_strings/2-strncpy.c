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
while (src[lens])
{
if (lens < n)
{
dest[lens] = src[lens];
}
lens++;
}
dest[lens + 1] = '\0';
return (dest);
}
