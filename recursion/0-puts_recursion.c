#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{  
_putchar(*s);
_puts_recursion(s + 1);
if (*s == '\0') {
_putchar('\n');
return;
} 
}
