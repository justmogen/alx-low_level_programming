#include <stdio.h>
#include <stdlib.h>
typedef struct list_s
{
	int n;
	struct list_s *next;
} listint_t;

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head:head of list
 * @n:node to be added
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nNew, *lNode;

	*nNew= malloc(sizeof(listint_t));
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
}
listint_t printNode(listint_t *head)
{
	ulistint_t *temp = head;

	while (temp != NULL)
	{
		printf("%d->->", temp->n);
		temp = temp->next;
	}
	printf("NULL\n");
}
int main(void)
{
	listint_t *head = NULL;

	add_nodeint_end(&head,200);
	add_nodeint_end(&head,409);
	add_nodeint_end(&head,90);

	printNode(head);
	return (0);
}
