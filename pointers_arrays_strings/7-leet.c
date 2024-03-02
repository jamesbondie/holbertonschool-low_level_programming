#include "main.h"
/**
 * leet - good asdasdasdasda
 * @s: aisjdaisjdalksjdlkasjdkl
 * Return: askjdkalksjdkaljsdlkaskd
 * alskdaskldaklsdkalsdaks
 * alksjdalksjdlkasjdlkajkl
 */
char *leet(char *)
{
char *r = s;
char c[] = { 4, 3, 0, 7, 1 };
char x[] = { 'a', 'e', 'o', 't', 'l' };
int i = 0;
while (*s)
{
for (i = 0; i < 5; i++)
{
if (*s == x[i] || *s == x[i] - 32)
*s = c[i] + '0';
}
s++;
}
return (r);
}
