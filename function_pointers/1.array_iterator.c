#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - <F12><F12><F12><F11>.
 * <F10><F10><F11><F11>
 * @name: <F11><F11><F11><F11>
 * @f: <F11><F11><F11><F11><F11><F11><F11><F11>
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i = 0;
while (i < size)
{
action(array[i]);
i++;
}
}
