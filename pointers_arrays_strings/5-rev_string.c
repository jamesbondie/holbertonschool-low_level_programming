#include "main.h"
/**
 * rev_string - good asdasdasdasda
 * @s: aisjdaisjdalksjdlkasjdkl
 * askjdkalksjdkaljsdlkaskd
 */
void rev_string(char *s)
{
int i = 0;
int a = 0;
while (s[i] != '\0')
{
i++;
}
while (s[i] != '\0')
{
s[i - 1] = s[a];
i--;
a++;
}
}
