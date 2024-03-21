#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - <F12><F12><F12><F11>.
 * @array: <F10><F10><F11><F11>
 * @size: <F11><F11><F11><F11>
 * @action: <F11><F11><F11><F11><F11><F11><F11><F11>
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
