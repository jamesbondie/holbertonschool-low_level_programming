#include "main.h"
/**
 * _memcpy - good asdasdasdasda
 * @dest: aisjdaisjdalksjdlkasjdkl
 * @src: askjdkalksjdkaljsdlkaskd
 * @n: aksjdkjasdjka
 * Return: alksjdalksjdlkasjdlkajkl
 */
char *_strchr(char *s, char c)
{
char b = 0;
char *yeni;
unsigned int x = 0;
unsigned int d = 0;
int i = 0;
while (*(s + x) != c)
{
	x++;
}
while (s[x] != '\0')
{
	*(yeni + d) = *(s + x);
	x++;
	d++;
	i++;
}
return (yeni);
}
