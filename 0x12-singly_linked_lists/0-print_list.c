#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that print elements of linkedlist
 *
 * @h: linked list
 *
 * Return: returns number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num_of_nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		printf("[%d] %s\n", current->len,
		current->str != NULL ? current->str : "(nil)");
		current = current->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}
