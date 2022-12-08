#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts new node in a dlistint_t list at index nyh
 * @h: pointer to the head of the dlistint_t list
 * @idx: The position to insert the new node
 * @n: integer for the new node to contain
 *
 * Return: NULL if function fails else the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, newNode, *prev;
	size_t count = 0;

	if (*h == NULL)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t))
	tmp = *h;

	while (tmp != NULL)
	{
		prev = tmp->prev;
		if (count == idx)
		{
			if (newNode == NULL)
				return (NULL);
			newNode->n = n;
			newNode->next = tmp;
			newNode->prev = prev;
			tmp->prev = newNode;
			if (prev != NULL)
				prev->next = newNode;
			return (newNode);
		}
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
