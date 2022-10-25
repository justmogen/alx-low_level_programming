#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees the list_t list
 * @head: Pointing to list_t list
 */
void free_list(list_t *head)
{
	list_t tempo;

	while (head)
	{
		tempo = head->next;
		free(head->str);
		free(head);
		head = tempo;
	}
}
