#include "lists.h"
/**
 * get_dnodeint_at_index - get nth node in dlistint_t linked list
 * @head: pointer to head of linked list
 * @nindex: node value to be located
 *
 * Return: NULL if node doesn't exist else address of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *node;

	if (head == NULL)
		return (NULL);

	node = head;
	while (node != NULL)
	{
		if (count == index)
			return (node);
		count++;
		node = node->next;
	}
	return (NULL);
}
