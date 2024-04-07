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
dlistint_t *temp;
temp = malloc(sizeof(dlistint_t));
if (temp == NULL)
return (NULL);
temp->prev = NULL;
temp->n = n;
temp->next = NULL;
temp->prev = *head;
if (*head != NULL)
(*head)->next = temp;
*head = temp;
return (temp);
}
