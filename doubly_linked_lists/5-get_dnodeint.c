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
dlistint_t *iter = head;
unsigned int x = 0;
while (x < index && iter != NULL)
{
	iter = iter->next;
x++;
}
if (iter == NULL)
        return (NULL);
return (iter);
}
