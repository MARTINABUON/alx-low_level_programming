#include "lists.h"
/**
 * print_listint_safe - function that prints a linked list with a loop safely.
 * @head: pointer to the 1st node of the linked list
 * Return: new_node
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tp_m = NULL;
	const listint_t *l_m = NULL;
	size_t cn = 0;
	size_t mynew_m;

	tp_m = head;
	while (tp_m)
	{
		printf("[%p] %d\n", (void *)tp_m, tp_m->n);
		cn++;
		tp_m = tp_m->next;
		l_m = head;
		mynew_m = 0;
		while (mynew_m < cn)
		{
			if (tp_m == l_m)
			{
				printf("-> [%p] %d\n", (void *)tp_m, tp_m->n);
				return (cn);
			}
			l_m = l_m->next;
			mynew_m++;
		}
		if (!head)
			exit(98);
	}
	return (cn);
}
