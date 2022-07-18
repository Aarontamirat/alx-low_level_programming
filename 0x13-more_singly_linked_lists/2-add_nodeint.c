#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning
 * of a linked list
 * @head: head of the linked list.
 * @n: inserted number.
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (*head);
}
