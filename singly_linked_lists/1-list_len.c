#include <stdio.h>
#include "lists.h"

/**
 * list_len - it prints all the elementes of list_t list
 * @h: it is our list
 * Return: in this particular function it returns the number of nodes
 */
size_t list_len(const list_t *h)
{
int c = 0;
while (h != NULL)
{
	h = h->next;
	c++;
	}
return (c);
}
