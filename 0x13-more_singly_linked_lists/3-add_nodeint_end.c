#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head:head of list
 * @n:node to be added
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nNew, *lNode;

	nNew = malloc(sizeof(listint_t));
	if (nNew == NULL)
		return (NULL);
	nNew->n = n;
	nNew->next = NULL;

	/* if head is null,make it an empty list */
	if (*head == NULL)
		*head = nNew;
	/* else find last node and add the nNew node */
	else
	{
		lNode = *head;
		/* loop till last node's next address is NULL */
		while (lNode->next != NULL)
		{
			lNode = lNode->next;
		}
		lNode->next = nNew;
	}
	return (*head);
}
