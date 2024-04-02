#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - it adds the given string to the head of our linked list
 * @head: it is our head
 * @str: and this is the input string for addition to head
 * Return: in this particular function it returns the address of last element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *x;
x = malloc(sizeof(size_t));
if (!x)
	return (NULL);
x->str = strdup(str);

	if (!x->str)
	{
		free(x);
		return (NULL);
	}

x->next = *head;
*head = x;
if (!str)
	return (NULL);
return (x);
}
