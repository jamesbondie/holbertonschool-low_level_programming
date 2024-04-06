#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - it adds the given string to the head of our linked list
 * @head: it is our head
 * @str: and this is the input string for addition to head
 * Return: in this particular function it returns the address of last element
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *temp;
int len = 0;


while (str[len])
	len++;
temp = malloc(sizeof(size_t));
if (!temp)
	return (NULL);
temp->str = strdup(str);
temp->next = NULL;
	if (!temp->str)
	{
		free(x);
		return (NULL);
	}
while (head->next == NULL)
{
	head = head->next;
}
head->next = temp;
if (!str)
	return (NULL);
return (x);
}
