#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *		and returns the head node’s data (n)
 * @head: head of list
 * if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *newNode;
	int count;

	if (*head == NULL)
		return (0);

	newNode = *head;
	/*value of head placed in count before deleting head */
	count = (*head)->n;
	*head = (*head)->next;

	free(newNode);
	return (count);
}
