#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then in uppercase,
 *              followed by the character '$'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int c;
c = 48;
while (c < 58)
{
putchar(c);
if (c != 57)
{
putchar(',');
putchar(' ');
}
c++;
}
putchar('\n');
return (0);
}
