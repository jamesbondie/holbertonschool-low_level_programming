#include "main.h"
/**
 * cap_leet - good asdasdasdasda
 * @s: aisjdaisjdalksjdlkasjdkl
 * askjdkalksjdkaljsdlkaskd
 * alskdaskldaklsdkalsdaks
 * alksjdalksjdlkasjdlkajkl
 */
char *leet(char *t)
{
int p = 0;
if (t[0] >= 'a' && t[0] <= 'z')
t[0] -= 32;
while (t[p] != '\0')
{
if (t[p] == ' ' || t[p] == '\t' || t[p] == '\n'
|| t[p] == ',' || t[p] == ';' || t[p] == '.'
|| t[p] == '.' || t[p] == '!' || t[p] == '?'
|| t[p] == '"' || t[p] == '(' || t[p] == ')'
|| t[p] == '{' || t[p] == '}')
{
if (t[p + 1] >= 'a' && t[p + 1] <= 'z')
t[p + 1] -= 32;
}
p++;
}
return (t);
}
