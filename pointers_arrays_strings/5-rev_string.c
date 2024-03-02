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
char* b[500];
i = 0;
a = 0;
while (s[i] != '\0')
{
i++;
}
while (i >= 0)
{
i--;
a++;
b[a - 1] = s[i];
}
while (a >= 0)
{
s[i] = b[i];
a--;
i++;
}
}
