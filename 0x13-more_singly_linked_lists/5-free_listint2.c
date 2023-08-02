#include "lists.h"

/**
 * free_listint - frees a list of ints
 * @head: pointer to first node
 *
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *node, *temp;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
