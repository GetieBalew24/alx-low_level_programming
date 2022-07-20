#include "lists.h"

/**
 * find_listint_loop - fnd a loop in a list
 * @head: points to beginning of list
 * Return: the address where loop starts or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp, *temp1;

	if (!head)
		return (NULL);
	temp = head;
	temp1 = head;

	while (temp1->next && temp1->next->next)
	{
		temp1 = temp1->next->next;
		temp = temp->next;
	}

	if (temp1 == temp)
	{
		temp = head;
		while (temp != temp1)
		{
			temp = temp->next;
			temp1 = temp1->next;
		}
		return (temp1);
	}
	return (NULL);
}
