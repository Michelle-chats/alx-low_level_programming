#include "lists.h"

/**
 * dlistint_len - returns the number of nodes in a doubly linked list
 * @h: pointer to the list
 *
 * Description: function to return number of elements in a lnkd list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
