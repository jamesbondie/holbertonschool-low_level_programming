#include "lists.h"
/**
 * add_dnodeint - it prints  lenght of our double linked list
 * @head: it is our head
 * @n: it is our data
 * Return: it returns lentgth of our double linked list
 *
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp;
temp = malloc(sizeof(dlistint_t));
temp->prev = NULL;
temp->n = n;
temp->next = NULL;
temp->next = *head;
head->prev = temp;
*head = temp;
return (temp);

}
