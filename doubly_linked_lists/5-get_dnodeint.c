#include "lists.h"
/**
 * get_dnodeint_at_index - it prints  lenght of our double linked list
 * @head: it is our head
 * @index: it is our index
 * Return: it returns lentgth of our double linked list
 *
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *iter;
unsigned int x = 0;
while (x < index)
{
	if (iter->next == NULL)
		iter = iter->next;
}
iter->next = head;
head->prev = iter;

return (iter);
}
