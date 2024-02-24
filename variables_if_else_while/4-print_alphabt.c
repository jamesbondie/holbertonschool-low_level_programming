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
char c = 'a';
while (c <= 'z')
{
if ( c == 'q' || c =='e')
{
c++;
}
else
{
putchar(c);
c++;
}
}
putchar('\n');
return (0);
}
