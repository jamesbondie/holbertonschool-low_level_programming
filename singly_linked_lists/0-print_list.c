#include <stdio.h>
#include "lists.h"

/**
 * print_list - it prints all the elementes of list_t list
 * @h: it is our list
 * Return: in this particular function it returns the number of nodes
 */
size_t print_list(const list_t *h)
{
int c = 0;
while (h != NULL)
{
	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
	h = h->next;
	c++;
	}
return (c);
}
