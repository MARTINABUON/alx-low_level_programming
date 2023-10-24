
/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tep = *head;
	listint_t *cur = NULL;
	unsigned int a = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tep);
		return (1);
	}

	while (a < index - 1)
	{
		if (!tep || !(tep->next))
			return (-1);
		tep = tep->next;
		a++;
	}


	cur = tep->next;
	tep->next = cur->next;
	free(cur);

	return (1);
}
