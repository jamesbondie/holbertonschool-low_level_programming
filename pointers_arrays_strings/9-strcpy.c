#include "main.h"
/**
 * _strcpy - good asdasdasdasda
 * @dest: aisjdaisjdalksjdlkasjdkl
 * @src: askjdkalksjdkaljsdlkaskd
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i+1])
{
	dest[i] = src[i];
	i++;
}
return (dest);
}
