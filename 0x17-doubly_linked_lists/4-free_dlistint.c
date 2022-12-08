#include "lists.h"
/**
 * free_dlistint - free a linked list
 * @head: head of list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}
