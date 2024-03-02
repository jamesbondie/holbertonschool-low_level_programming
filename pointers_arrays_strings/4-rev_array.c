#include "main.h"
/**
 * reverse_array- good asdasdasdasda
 * @a: aisjdaisjdalksjdlkasjdkl
 * @n: askjdkalksjdkaljsdlkaskd
 * alskdaskldaklsdkalsdaks
 * alksjdalksjdlkasjdlkajkl
 */
void reverse_array(int *a, int n)
{
int i = 0;
int b;
int j;
while (i < n - 1)
{
j = i + 1;
while (j > 0)
{
b = *(a + j);
*(a + j) = *(a + (j - 1));
*(a + (j - 1)) = b;
j--;
}
i++;
}
}

