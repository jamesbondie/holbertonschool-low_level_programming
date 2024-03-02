#include "main.h"
/**
 * rev_string - good asdasdasdasda
 * @s: aisjdaisjdalksjdlkasjdkl
 * askjdkalksjdkaljsdlkaskd
 */
void rev_string(char *s)
{
int i;
int a;
char b;
i = 0;
a = 0;
while (s[i] != '\0')
{
i++;
}
i--;
while (i > a)
{
i--;
a++;
b = s[a];
s[a] = s[i];
s[i] = b;
}
}
