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

	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
	}
}

