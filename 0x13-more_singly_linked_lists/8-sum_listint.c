#include "lists.h"

/**
 * sum_listint - sums the data(n) of linked list
 * @head: first node
 *
 * Return: sumed up
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
