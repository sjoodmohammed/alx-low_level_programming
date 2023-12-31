#include "lists.h"

/**
* list_len - determine length of linked list
* @: pointer to the first node
*
* Return: size of list
*/

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
