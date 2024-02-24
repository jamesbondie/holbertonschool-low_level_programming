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
    char ab[] = "abcdefghijklmnopqrstuvwxyz";
    char cd[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char ef = '$';
    for (int i = 0; ab[i] != '\0'; i++)
    {
        putchar(ab[i]);
    }
    for (int i = 0; cd[i] != '\0'; i++)
    {
        putchar(cd[i]);
    }
    putchar(ef);
    return (0);
}

