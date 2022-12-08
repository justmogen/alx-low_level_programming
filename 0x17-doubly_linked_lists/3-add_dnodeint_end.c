#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to head of dlistint_t list
 * @n: integer for new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t newNode, lastNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		newNode->next = NULL;
		*head = newNode;
	}

	lastNode = *head;
	while (lastNode->next != NULL)
		lastNode = lastNode->next;
	lastNode->next = newNode;
	newNode->prev = lastNode;

	return (newNode);
}
