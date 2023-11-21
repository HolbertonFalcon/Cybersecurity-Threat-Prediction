#include "lists.h"

/**
 * sum_dlistint - short desc
 *
 * Description: long desc
 *
 * @head: argument_1 desc
 *
 * Return: return desc
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (sum);
	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
