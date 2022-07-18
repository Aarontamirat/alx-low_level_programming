#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of the linked list.
 * Return: head node value.
 */

int pop_listint(listint_t **head)
{
	int tobe;
	listint_t *h;
	listint_t *tempo;

	if (*head == NULL)
		return (0);

	tempo = *head;

	tobe = tempo->n;

	h = tempo->next;

	free(tempo);

	*head = h;

	return (tobe);
}
