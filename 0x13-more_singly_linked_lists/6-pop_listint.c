#include "lists.h"

/**
 * free_listint2 - frees a list of ints
 * @head: address of pointer to firstnode
 *
 * Return: void
*/
void free_listint2(listint_t **head)
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
