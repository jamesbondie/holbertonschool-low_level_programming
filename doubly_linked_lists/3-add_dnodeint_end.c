#include "lists.h"
/**
 * add_dnodeint_end - it prints  lenght of our double linked list
 * @head: it is our head
 * @n: it is our data
 * Return: it returns lentgth of our double linked list
 *
 *
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp, *iter;
iter = *head;
temp = malloc(sizeof(dlistint_t));
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

while (iter->next != NULL)
{
iter = iter->next;
}
iter->next = temp;
temp->prev = iter;
return (temp);
}
