#include "lists.h"

/**
* *add_nodeint - add a node to the list.
* @head:  pointer to the first node
* @n: value of new node
* Return: pointer to new node.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	
	if (!head || !new_node)
			return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if (*head)
		  new_node->next = *head;
	*head = new_node;
	return (new_node);
}
