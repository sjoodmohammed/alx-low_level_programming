#include "lists.h"

/**
* pop_listint - free a list of int.
* @head:  pointer to the first node
*
* Return: void.
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int n;
	
	if (!head || !*head)
			return (0);
	
	node = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = node;
	return (n);
}

