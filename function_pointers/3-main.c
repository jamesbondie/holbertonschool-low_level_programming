#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * int_index - <F12><F12><F12><F11>.
 * @array: <F10><F10><F11><F11>
 * @size: <F11><F11><F11><F11>
 * @cmp: <F11><F11><F11><F11><F11><F11><F11><F11>
 * Return: <F8><F7><F8><F7>
 */
int main(int argc, char *argv[])
{
int x;
int y;
int (*function)(int, int);
if (argc != 4)
	{
		printf("Esrror\n");
		exit(98);
	}
x = atoi(argv[1]);
y = atoi(argv[3]);
function = get_op_func(argv[2]);

if (!function)
{
	printf("Error\n");
	exit(99);
}
printf("%d\n", function(x, y));

return (0);
}
