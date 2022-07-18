#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of the linked list.
 * Return: no return.
 */

void free_listint(listint_t *head)
{
	listint_t *tempo;

	while ((tempo = head) != NULL)
	{
		head = head->next;
		free(tempo);
	}
}
