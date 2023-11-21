#include "lists.h"

/**
 * free_dlistint - short desc
 *
 * Description: long desc
 *
 * @head: argument_1 desc
 *
 * Return: return desc
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (head)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
