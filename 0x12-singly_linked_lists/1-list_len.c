#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h:the linked list_t list
 * Return:the number of elements in linked list h
 */
size_t list_len(const list_t *h)
{
	size_t sub = 0;

	while (h)
	{
		sub++;
		h = h->next;
	}
	return (sub);
}
