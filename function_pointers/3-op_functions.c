#include <stdio.h>
#include <stdbool.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * int_index - <F12><F12><F12><F11>.
 * @array: <F10><F10><F11><F11>
 * @size: <F11><F11><F11><F11>
 * @cmp: <F11><F11><F11><F11><F11><F11><F11><F11>
 * Return: <F8><F7><F8><F7>
 */
int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	if (b == 0)
	{
		
        printf("Error\n");
                exit(100);
}
	return (a / b);
}
int op_mod(int a, int b)
{
	if (b == 0)
        {

        printf("Error\n");
                exit(100);
}
	return (a %b);
}
