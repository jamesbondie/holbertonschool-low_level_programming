#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - <F12><F12><F12><F11>.
 * @s: <F10><F10><F11><F11>
 * <F11><F11><F11><F11><F11><F11><F11><F11>
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
while (i <= 4)
{
if (*s == *(ops[i].op))
return (ops[i].f);
i++;
}
return (NULL);
}
