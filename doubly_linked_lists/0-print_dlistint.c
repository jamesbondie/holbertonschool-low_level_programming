#include "lists.h"
/**
 * print_dlistint - it prints our double linked list
 * @h: it is our head
 * Return: it returns lentgth of our double linked list
 *
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t length = 0;

while (h)
{
	printf("%d", h->n);
	h = h->next;
	length++;

}
return (length);
}
