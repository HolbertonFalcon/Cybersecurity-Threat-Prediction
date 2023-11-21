#include "lists.h"

/**
 * dlistint_len - short desc
 *
 * Description: long desc
 *
 * @h: double linked list ptr
 *
 * Return: return desc
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current;
	size_t count;

	current = (dlistint_t *) h;
	count = 0;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
