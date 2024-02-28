#include "main.h"
/**
*main - program that prints either number
*or fizz or buzz or fizzBuzz
*@k: asdasdasdasdasdasdasd
* @j: asdasdaksdjalksd
* @d: askdajslkdjalksjdlaksjd
* @z: alskdjklfajlkdjf
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
int z = 0;
int y = 1;
int x = size;
while(d < size)
{
while(j < x)
{
putchar('a');
j++;
}
x--;
j = 0;
while (k < y)
{
putchar('b');
k++;
}
y++;
k = 0;
putchar('\n');
d++;
}
}
