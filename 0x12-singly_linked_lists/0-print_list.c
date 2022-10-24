#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints elements of a list_t list
 * Return: number of nodes
 * if string is null == [0] (nil)
 * @h: list_t list
 */
size_t print_list(const list_t *h)
{
	size_t node = 0, head = *h;

	while (head)
	{
		if (head->str == NULL)
		       printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);

		node++;
		head = head->next;
	}
	return (node);
}
