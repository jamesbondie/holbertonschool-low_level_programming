#include "main.h"
/**
* binary_to_uint - it converts binary to unsignet int
* @b: char b
*
* Return: it gives us good results
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int z = 0;
int i;
if (b == NULL)
return (0);
while (*b != '\0')
{
if (*b != '0' && *b != '1')
return (0);
z = z * 2 + *b - '0';
b = b + 1;
}
return (z);
}
