#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds node at the end of list_t list
 *
 * @head:pointer to head of list
 * @str:the string to be added to list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int leng;
	char *duplic;
	list_t *newest, *end;

	newest = malloc(sizeof(list_t)0);
	if (newest == NULL)
		return (NULL);

	duplic = strdup(str);
	if (str == NULL)
		free(newest);
		return (NULL);

	for (leng = 0; str[leng];)
		leng++;

	newest->str = duplic;
	newest->leng = leng;
	newest->next = NULL;

	if (*head == NULL)
		*head = newest;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->end = newest;
	}
	return (*head);
}

