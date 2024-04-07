#include "lists.h"
/**
 * insert_dnodeint_at_index - it prints  lenght of our double linked list
 * @h: it is our head
 * @idx: it is our index
 * @n: ok
 * Return: it returns lentgth of our double linked list
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *temp = malloc(sizeof(dlistint_t));
dlistint_t *iter = *h;
if (!temp)
return (NULL);
if (idx == 0 || !iter)
{
add_dnodeint(h, n);
free(temp);
return (*h);
}
while (iter && i < idx - 1)
{
iter = iter->next;
i++;
}
if (!iter || i != idx - 1)
{
free(temp);
return (NULL);
}
temp->n = n;
temp->next = iter->next;
temp->prev = iter;
if (iter->next)
iter->next->prev = temp;
iter->next = temp;
return (temp);
}
