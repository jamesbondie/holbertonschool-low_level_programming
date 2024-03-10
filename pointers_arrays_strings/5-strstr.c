#include "main.h"
#include <stddef.h>
/**
 * _strstr - good asdasdasdasda
 * aisjdaisjdalksjdlkasjdkl
 * @haystack: askjdkalksjdkaljsdlkaskd
 * @needle: aksjdkjasdjka
 * Return: alksjdalksjdlkasjdlkajkl
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, c, j = 0;
while (haystack[i] != '\0')
{
c = i;
j = 0;
while (needle[j] != '\0')
{
if (haystack[c] == needle[j])
{
c++;
j++;
}
else
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
i++;
}
return (NULL);
}
