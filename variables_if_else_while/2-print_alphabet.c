#include <stdio.h>
/**
* main - Entry point
* Description: Prints the alphabet in lowercase, then in uppercase,
*followed by the character '$'.
* Return: Always 0 (Success)
*/
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
