#include "main.h"
/**
 * string_toupper- good asdasdasdasda
 * @z: aisjdaisjdalksjdlkasjdkl
 *  askjdkalksjdkaljsdlkaskd
 * Return: alskdaskldaklsdkalsdaks
 * alksjdalksjdlkasjdlkajkl
 */
char *string_toupper(char *z)
{
int len = 0;
while (z[len])
{
if (z[len] >= 'a' && z[len] <= 'z')
{
z[len] = z[len] - 'a' + 'A';
}
len++;
}
return (z);
}
