#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * int_index - <F12><F12><F12><F11>.
 * @array: <F10><F10><F11><F11>
 * @size: <F11><F11><F11><F11>
 * @cmp: <F11><F11><F11><F11><F11><F11><F11><F11>
 * Return: <F8><F7><F8><F7>
 */
int (*get_op_func(char *s))(int, int)
{

op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
};
int i = 0;
if (strlen(s) > 1)
{
	printf("Errosr\n");
		exit(99);
}
while (i <= 4)
{
	if (*s == *(ops[i].op))
		return (ops[i].f);
			i++;
}
return (NULL);
}
