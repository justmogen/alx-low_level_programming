#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at
 *		index of a listint_t linked list.
 * @head: pointer to head of list
 * @index: index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempo = *head, *prev;
	unsigned int count;

	if (tempo == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempo);
		return (1);
	}
	for (count = 0; count < (index - 1); count++)
	{
		if (tempo->next == NULL)
			return (-1);

		tempo = tempo->next;
	}

	prev = tempo->next;
	tempo->next = prev->next;
	free(prev);
	return (1);
}
