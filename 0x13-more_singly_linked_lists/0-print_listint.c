#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all elements  of a list listint_t list
 * @h: head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	listint_t *head = h;
	size_t count = 0;

	while (head != NULL)
	{
		count++;
		printf("%d\n", head->n);
		head = head->next;
	}
	return (count);
}
