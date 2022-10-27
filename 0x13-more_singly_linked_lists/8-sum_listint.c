#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head:pointer to head of listint_t linked list
 *
 * Return:if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
