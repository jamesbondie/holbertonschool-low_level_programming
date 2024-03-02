#include "main.h"
/**
 * _strcat - good asdasdasdasda
 * @dest: aisjdaisjdalksjdlkasjdkl
 * @src: askjdkalksjdkaljsdlkaskd
 * Return: alksjdalksjdlkasjdlkajkl
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int a = 0;
while (dest[i])
{
	i++;
}
while (src[a])
{
dest[i+a] = src[a];
a++;
}
return (dest);
}
