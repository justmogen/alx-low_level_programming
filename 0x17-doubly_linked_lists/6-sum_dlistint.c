#include "lists.h"
/**
 * sum_dlistint - gives all the sum of nodes' n value
 * @head: ponter to head of linked list
 *
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
