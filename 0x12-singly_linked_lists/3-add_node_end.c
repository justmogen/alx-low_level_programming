#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to head of the list_t list
 * @str: new string to be added to existing list_t list
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL) {
		return NULL;
	}

	list_t *new = malloc(sizeof(list_t));
	if (new == NULL) {
		return NULL;
	}

	new->str = strdup(str);
	if (new->str == NULL) {
		free(new);
		return NULL;
	}

	new->len = strlen(str);
	
	new->next = NULL;
	if (*head == NULL) {
		*head = new;
	} else {
		list_t *last = *head;
		while (last->next != NULL) {
			last = last->next;
		}
		last->next = new;
	}

	return new;
}
