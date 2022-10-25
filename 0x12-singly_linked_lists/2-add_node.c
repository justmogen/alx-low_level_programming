#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to head of the list_t list
 * @str: new string to be added to existing list_t list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int leng;
	char *val;
	list_t *newest;

	newest = malloc(sizeof(list_t));
	if (newest == NULL)
	{
		return (NULL);
	}
	val = strdup(str);
	if (val == NULL)
	{
		free(newest);
		return (NULL);
	}
	for (leng = 0; str[len];)
		leng++;
	newest->str = val;
	newest->leng = leng;
	newest->next = *head;

	*head = newest;
	return (newest);
}
