#include <stdio.h>
#include <stdbool.h>
#include "function_pointers.h"
/**
 * int_index - <F12><F12><F12><F11>.
 * @array: <F10><F10><F11><F11>
 * @size: <F11><F11><F11><F11>
 * @cmp: <F11><F11><F11><F11><F11><F11><F11><F11>
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;
if (size <= 0)
return (-1);
if (array == NULL)
	return (-1);
if (cmp == NULL)
	return (-1);
while (i < size)
{
cmp(array[i]);
if (cmp(array[i]) == true)
	return (i);
i++;
}
return (-1);
}
