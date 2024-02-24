#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees the list_t list
 * @head: Pointing to list_t list
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *tempo = head;
		head = head->next;
		free(tempo->str);
		free(tempo);
	}
}
