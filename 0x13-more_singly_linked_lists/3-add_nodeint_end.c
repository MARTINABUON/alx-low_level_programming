#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mynew;
	listint_t *tep = *head;

	mynew = malloc(sizeof(listint_t));
	if (!mynew)
		return (NULL);

	mynew->n = n;
	mynew->next = NULL;

	if (*head == NULL)
	{
		*head = mynew;
		return (mynew);
	}

	while (tep->next)
		tep = tep->next;

	tep->next = mynew;

	return (mynew);
}
