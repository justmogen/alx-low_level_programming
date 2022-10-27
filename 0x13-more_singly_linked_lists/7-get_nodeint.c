#include "lists.h"
/**
 * get_nodeint - returns the nth node of a listint_t linked list.
 * @index:index of node starting at 0
 * @head:head of list-first node
 *
 * Return:if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index)
	{
		count++;
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}

