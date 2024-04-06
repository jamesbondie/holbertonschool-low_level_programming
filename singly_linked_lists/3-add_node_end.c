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
list_t *iter = *head;
list_t *temp;
int lenstr = 0;

if (!*head)
{
	*head = temp;
	return (temp);
}
temp = malloc(sizeof(list_t));
if (temp == NULL)
	return (NULL);
while(str[lenstr])
	lenstr++;
temp->str = strdup(str);
temp->len = lenstr;
temp->next = NULL;

while (iter->next)
	iter = iter->next;
iter->next = temp;
return (temp);
}
