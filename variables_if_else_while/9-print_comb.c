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
c = '0';
while (c<= '8')
{
putchar(c);
c++;
putchar(',');
putchar(' ');
}
putchar('9');
return (0);
}
