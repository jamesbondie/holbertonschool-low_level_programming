#include "lists.h"
/**
 * sum_dlistint - it prints  lenght of our double linked list
 * @head: it is our head
 * it is our index
 * Return: it returns lentgth of our double linked list
 *
 *
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *iter = head;
int x = 0;
while (iter != NULL)
{
x = x + iter->n;
iter = iter->next;
x++;
}
if (iter == NULL)
return (NULL);
return (x);
}
