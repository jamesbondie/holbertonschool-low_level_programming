#include <stdio.h>
#include "main.h"
/**
 * print_array - good asdasdasdasda
 * @a: aisjdaisjdalksjdlkasjdkl
 * @n: askjdkalksjdkaljsdlkaskd
 */
void print_array(int *a, int n)
{
int i = 0;
while (n > i)
{
	printf("%d", a[i]);
	if (i == n - 1)
	{
		break;
	}
	printf(", ");
	i++;
}
printf("\n");
}
