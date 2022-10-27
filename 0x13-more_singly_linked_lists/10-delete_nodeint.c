#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
 * @head: pointer to head of list
 * @index: index of node to be deleted
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* store head */
	listint_t *back, *tempo = *head;
	
	// if head node holds the index to be removed
	if (tempo != NULL && tempo->n == index)
	{
		*head = tempo->next; //change head & move to next value
		free(tempo); //free old head
		return (1);
	}
	while (tempo != NULL && tempo->n != index)
	{
		back = tempo;
		tempo = tempo->next;
	}

	//if index not found in list
	if (temp == NULL)
		return (-1);
	back->next = tempo->next;
	free(tempo);
	return (1);
}
