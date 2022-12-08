#include "lists.h"
/**
 * print_dlistint - prints all elements of dlistint_t list
 * @h: head of dlistint-t list
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while(h)
	{
		num++;
		print("%d\n", h->n);
		h = h->next;
	}
	return (num);
}
