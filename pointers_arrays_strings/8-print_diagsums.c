#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - good asdasdasdasda
 * aisjdaisjdalksjdlkasjdkl
 * @a: askjdkalksjdkaljsdlkaskd
 * aksjdkjasdjka
 * Return: alksjdalksjdlkasjdlkajkl
 */
void print_diagsums(int *a, int size)
{
int x = 0;
int y = 0;
int z = 0;
int d = size * size;
while (x < d) {
y = y + a[x];
x = x + size + 1;
}
x = size - 1;
while (x < d - 1) {
z = z + a[x];
x = x + size - 1;
}
printf("%d, %d\n", y, z);
}
