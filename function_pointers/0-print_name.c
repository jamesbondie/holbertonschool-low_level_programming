#include "function_pointers.h"
/**
 * print_name - <F12><F12><F12><F11>.
 * <F10><F10><F11><F11>
 * @name: <F11><F11><F11><F11>
 * @f: <F11><F11><F11><F11><F11><F11><F11><F11>
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
