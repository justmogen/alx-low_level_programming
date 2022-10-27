#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head:pointer to address of head of list
 * @idx:index of the list where new node should be added-indices starts at 0
 * @n:integer value for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *front = *head, *nNode;
	unsigned int count;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = front;
		*head = newNode;
		return (newNode);
	}

	for (count = 0; count < (idx - 1); count++)
	{
		if (front == NULL || front->next == NULL)
			return (NULL);
		front = front->next;
	}
	newNode->next = front->next;
	front->next = newNode;

	return (newNode);
}
