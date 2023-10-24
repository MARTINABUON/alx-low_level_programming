#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *orig = NULL;
	listint_t *nex = NULL;

	while (*head)
	{
		nex = (*head)->next;
		(*head)->next = orig;
		orig = *head;
		*head = nex;
	}

	*head = orig;

	return (*head);
}
