#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - <F12><F12><F12><F11>.
 * @a: <F10><F10><F11><F11>
 * @b: <F11><F11><F11><F11<<F11><F11><F11><F11><F11><F11><F11><F11>
 * Return: <F8><F7><F8><F7>
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - <F12><F12><F12><F11>.
 * @a: <F10><F10><F11><F11>
 * @b: <F11><F11><F11><F11<<F11><F11><F11><F11><F11><F11><F11><F11>
 * Return: <F8><F7><F8><F7>
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - <F12><F12><F12><F11>.
 * @a: <F10><F10><F11><F11>
 * @b: <F11><F11><F11><F11<<F11><F11><F11><F11><F11><F11><F11><F11>
 * Return: <F8><F7><F8><F7>
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - <F12><F12><F12><F11>.
 * @a: <F10><F10><F11><F11>
 * @b: <F11><F11><F11><F11<<F11><F11><F11><F11><F11><F11><F11><F11>
 * Return: <F8><F7><F8><F7>
 */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
 * op_mod - <F12><F12><F12><F11>.
 * @a: <F10><F10><F11><F11>
 * @b: <F11><F11><F11><F11<<F11><F11><F11><F11><F11><F11><F11><F11>
 * Return: <F8><F7><F8><F7>
 */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
