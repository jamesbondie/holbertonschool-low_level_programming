#include <stdio.h>
/**
* main - Entry point
* Description: Prints the alphabet in lowercase, then in uppercase,
*followed by the character '$'.
* Return: Always 0 (Success)
*/
int main(void)
{
char j = 'a';
while (j <= 'z')
{
putchar(j);
j++;
}
j = 'A';
while (j <= 'Z')
{
putchar(j);
j++;
}
putchar('\n');
return (0);
}
