#include "lists.h"
/**
 * dlistint_len - it prints  lenght of our double linked list
 * @h: it is our head
 * Return: it returns lentgth of our double linked list
 *
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
int x = 0;

while (h)
{
	h = h->next;
	x++;
}
return (x);
