include "lists.h"
#include <stdio.h>

/**
 * list_len - size of a list_t
 * @h: input list
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	int i;
	const list_t *temp;

	i = 0;
	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
