#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *mynew;
	listint_t *tep = *head;

	mynew = malloc(sizeof(listint_t));
	if (!mynew || !head)
		return (NULL);

	mynew->n = n;
	mynew->next = NULL;

	if (idx == 0)
	{
		mynew->next = *head;
		*head = mynew;
		return (mynew);
	}

	for (a = 0; tep && a < idx; a++)
	{
		if (a == idx - 1)
		{
			mynew->next = tep->next;
			tep->next = mynew;
			return (mynew);
		}
		else
			tep = tep->next;
	}

	return (NULL);
}
