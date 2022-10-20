#include "lists.h"
/**
 *free_list - Function that frees a list_t list
 *
 *@head: A pointer to the list_t
 *
 *Return: returns void
 */
void free_list(list_t *head)
{
	list_t *check, *c;

	c = head;

	while (c != NULL)
	{
		check = c->next;
		free(c->str);
		free(c);
		c = check;
	}
}
