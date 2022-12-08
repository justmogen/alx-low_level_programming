#include "lists.h"
/**
 * dlistint_len - prints the number of elements in a linked dlistint_t list
 * @h: head of the dlistint_t
 *
 * Return: number of elements in dlistint_t list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while(h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
