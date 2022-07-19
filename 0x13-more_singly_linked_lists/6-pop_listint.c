#include "lists.h"

/**
 * pop_listint - deletes the head node of list & returns data(n)
 * @head: points to list
 * Return: int n
 */

int pop_listint(listint_t **head)
{
	listint_t *location;
	int data = 0;

	if (!(*head))
		return (0);
	data += (*head)->n;
	location = *head;
	*head = (*head)->next;
	free(location);
	return (data);
}
