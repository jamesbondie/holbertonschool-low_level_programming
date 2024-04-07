#include "lists.h"
/**
 * free_dlistint - it prints  lenght of our double linked list
 * @head: it is our head
 * it is our data
 * Return: it returns lentgth of our double linked list
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
if (head)
free_dlistint(head->next);
free(head);
}
