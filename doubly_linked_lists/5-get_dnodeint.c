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
dlistint_t *temp, *iter;
unsigned int x = 0;
temp = malloc(sizeof(head));
if (temp == NULL)
return (NULL);
temp->prev = NULL;
temp->n = n;
temp->next = NULL;
if (*head == NULL)
{
temp->prev = NULL;
*head = temp;
return (temp);
}
while (x < 5)
{
	if (iter->next == NULL)
		iter = iter->next;
}
iter->next = temp;
temp->prev = iter;

return (temp);

}
