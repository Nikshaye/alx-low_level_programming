#include "lists.h"

/**
 * listint_len - returns the number of elements of linked lists
 * @h: linked lists of the type listint_t to traverse
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
