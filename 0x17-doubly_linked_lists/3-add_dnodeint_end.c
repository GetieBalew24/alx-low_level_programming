#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a double linked list
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		new->prev = temp;
		temp->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}
	return (new);
}
