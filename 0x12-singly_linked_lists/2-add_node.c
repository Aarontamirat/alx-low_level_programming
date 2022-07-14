#include "lists.h"
/**
 * add_node - adds a new node at the beginning of
 * a list_t list
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: Linked list.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tempo;
	size_t leng;

	tempo = malloc(sizeof(list_t));
	if (tempo == NULL)
		return (NULL);

	tempo->str = strdup(str);

	for (leng = 0; str[leng]; leng++)
		;

	tempo->len = leng;
	tempo->next = *head;
	*head = tempo;

	return (*head);
}
