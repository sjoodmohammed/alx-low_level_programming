#include "lists.h"

/**
* free_listint - free a list of int.
* @head:  pointer to the first node
*
* Return: void.
*/

void free_listint(listint_t *head)
{
	listint_t *node;
	
	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
