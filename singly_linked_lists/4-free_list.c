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
list_t *iter = head;

while (iter != NULL)
{
list_t *temp = iter;
iter = iter->next;
free(temp);
}
}
