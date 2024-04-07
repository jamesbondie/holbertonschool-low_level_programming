#include "lists.h"
/**
 * delete_dnodeint_at_index - it prints  lenght of our double linked list
 * @head: it is our head
 * @index: it is our index
 * ok
 * Return: it returns lentgth of our double linked list
 *
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *iter;
unsigned int x = 0;

iter = *head;
if (*head == NULL)
return (-1);
if (index == 0)
{
if (iter->next)
iter->next->prev = NULL;
(*head) = (*head)->next;
free(iter);
return (1);
}
while (iter && x < index)
{
iter = iter->next;
x++;
}
if (iter == NULL)
return (-1);
iter->prev->next = iter->next;
if (iter->next)
iter->next->prev = iter->prev;
free(iter);
return (1);
}

