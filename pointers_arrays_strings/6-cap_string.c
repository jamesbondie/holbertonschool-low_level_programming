#include "main.h"
/**
 * string_toupper- good asdasdasdasda
 * @z: aisjdaisjdalksjdlkasjdkl
 *  askjdkalksjdkaljsdlkaskd
 * Return: alskdaskldaklsdkalsdaks
 * alksjdalksjdlkasjdlkajkl
 */
char *cap_string(char *s)
{
int p = 0;
if (s[0] >= 'a' && s[0] <= 'z')
s[0] -= 32;
while (s[p] != '\0')
{
if (s[p] == ' ' || s[p] == '\t' || s[p] == '\n'
|| s[p] == ',' || s[p] == ';' || s[p] == '.'
|| s[p] == '.' || s[p] == '!' || s[p] == '?'
|| s[p] == '"' || s[p] == '(' || s[p] == ')'
|| s[p] == '{' || s[p] == '}')
{
if (s[p + 1] >= 'a' && s[p + 1] <= 'z')
s[p + 1] -= 32;
}
p++;
}
return (s);
}
