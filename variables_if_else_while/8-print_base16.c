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
char x;
c = '0';
while (c<= '9')
{
putchar(c);
c++;
}
x = 'a';
while (x<= 'f')
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
