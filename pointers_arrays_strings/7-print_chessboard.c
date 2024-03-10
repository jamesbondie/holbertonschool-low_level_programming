#include "main.h"
#include <stddef.h>
/**
 * print_chessboard - good asdasdasdasda
 * aisjdaisjdalksjdlkasjdkl
 * @a: askjdkalksjdkaljsdlkaskd
 * aksjdkjasdjka
 * Return: alksjdalksjdlkasjdlkajkl
 */
void print_chessboard(char (*a)[8])
{
int d = 0;
int b = 0;
while (d <= 7)
{
b = 0;
while (b <= 7)
{
_putchar(a[d][b]);
b++;
}
_putchar('\n');
d++;
}
}
