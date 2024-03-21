#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - <F12><F12><F12><F11>.
 * @array: <F10><F10><F11><F11>
 * @size: <F11><F11><F11><F11>
 * @action: <F11><F11><F11><F11><F11><F11><F11><F11>
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
int a = 0;
if (size <= 0)
return (-1);
while (i < size)
{
if (cmp(array[i]) != 0)
	a = i;
	return (a);
}
i++;
return (-1);
}
