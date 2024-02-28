#include "main.h"
/**
*main - program that prints either number
*or fizz or buzz or fizzBuzz
*@k: asdasdasdasdasdasdasd
* @j: asdasdaksdjalksd
* @d: askdajslkdjalksjdlaksjd
* skdjklfajlkdjf
* @y: akljsdflkajsdlkfjaskdlfaksjd
* @x: aslkdjflkjoqjoijowijofsjd
*
*Return: returns 0
*/
void print_triangle(int size)
{
int k = 0;
int j = 0;
int d = 0;
int y = 1;
int x = size;
if (size > 0)
{
while(d < size)
{
while(j < x - 1)
{
j++;
_putchar(' ');
}
x--;
j = 0;
while (k < y)
{
_putchar(35);
k++;
}
y++;
k = 0;
_putchar('\n');
d++;
}
}
else
{
_putchar('\n');
}
}
