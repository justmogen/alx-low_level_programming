#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head:pointer to address of head of list
 * @idx:index of the list where new node should be added-indices starts at 0
 * @n:integer value for the new node 
 *
 * Returns: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/**
	 * Create the new node
	 * Point the next pointer of the prev node to new node.
	 * Point the next pointer of the new node to current node.
	 */
	listint_t *front = *head, *nNode;
	unsigned int count;

	/* creating a new empty list node */
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
	/**
	 * index begins at 0
	 * traverse using loop to find the position to fix the given integer
	 */
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
