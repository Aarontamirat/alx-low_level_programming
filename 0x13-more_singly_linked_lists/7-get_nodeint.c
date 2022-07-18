#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of the linked list.
 * @index: index of the node.
 * Return: nth node. If node does not exist, returns NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	for (counter = 0; counter < index && head != NULL; counter++)
	{
		head = head->next;
	}

	return (head);
}
