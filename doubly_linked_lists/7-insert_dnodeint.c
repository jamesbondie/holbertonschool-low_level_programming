#include "lists.h"
/**
 * get_dnodeint_at_index - it prints  lenght of our double linked list
 * @head: it is our head
 * @index: it is our index
 * Return: it returns lentgth of our double linked list
 *
 *
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *temp,*iter = *h;
temp = malloc(sizeof(dlistint_t));
unsigned int x = 0;
if (temp == NULL)
        return (NULL);
temp->prev = NULL;
temp->n = n;
temp->next = NULL;
if (*h == NULL)
{
if (idx == 0)
{
*h = temp;
return (temp);
}
else
{
free(temp);
return (NULL);
}
}
while (x < idx && iter != NULL)
{
iter = iter->next;
x++;
}
if (i < idx)
{
free(temp);
return (NULL);
}
if (idx == 0)
{
temp->next = *h;
(*h)->prev = temp;
*h = temp;
}
else if (iter == NULL)
{
dlistint_t *last = *h;
while (last->next != NULL)
{
last = last->next;
}
last->next = temp;
temp->prev = last;
}
else
{
temp->next = iter;
temp->prev = iter->prev;
iter->prev->next = temp;
iter->prev = temp;
}
    return (temp);
}
