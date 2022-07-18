#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list.
 * @h: head of the linked list.
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		size++;
	}
	return (size);
}
