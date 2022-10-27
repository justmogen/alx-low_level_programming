#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head:head of list
 * @n:node to be added
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = malloc(sizeof(listint_t));
	temp->next->n = n;
	temp->next->next = NULL;

	return (temp);
}
	
