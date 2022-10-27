#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: pointer to head of list
 * @index: index of node to be deleted
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	//store head node in tempo
	listint_t *tempo = *head, *prev;
	unsigned int count = 0;

	if (tempo == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next; //changed head
		free(tempo); //free old head
		return (1);
	}
	
	while (count < (index - 1))
	{
		count++;
		if (tempo->next == NULL)
			return (-1);

		tempo = tempo->next;
	}
	prev = tempo->next;
	tempo->next = prev->next; //unlink the node from linked list
	free(prev);
	return (1);
}
