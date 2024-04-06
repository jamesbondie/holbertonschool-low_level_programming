#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - it adds the given string to the head of our linked list
 * @head: it is our head
 *  and this is the input string for addition to head
 * Return: in this particular function it returns the address of last element
 */



void free_list(list_t *head)
{
	if (head != NULL)
	{
if (head->next != NULL)
free_list(head->next);


free(head->str);
free(head);
}
}
