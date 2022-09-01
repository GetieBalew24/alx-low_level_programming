#include "lists.h"

/**
 * free_dlistint - frees of double linked list list.
 * @head: pointer to the adress of the first node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual_node;
	dlistint_t *next_node;

	if (head)
	{
		actual_node = head;
		next_node = head->next;
		while (next_node)
		{
			free(actual_node);
			actual_node = next_node;
			next_node = next_node->next;
		}
		free(actual_node);
	}
}
