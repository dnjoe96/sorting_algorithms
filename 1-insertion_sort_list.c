#include "sort.h"

/**
 * get_at_index - a function that returns the nth node of
 * a stack_t linked list.
 *
 * @head: The head node of the list
 * @index: the index to return
 * Return: Node data at index, if the node does not exist, return NULL
 */
listint_t *get_at_index(listint_t *head, unsigned int index)
{
	listint_t *h;
	unsigned int count = 0;

	h = head;

	while (h != NULL)
	{
		if (index == count)
			return (h);
		h = h->next;
		count++;
	}
	return (NULL);
}

/**
 * len_dlistint - a function that counts the nodes in a list
 *
 * @h: pointer to the head node of the list
 * Return: The number of nodes
 */
size_t len_dlistint(const listint_t *h)
{
	const listint_t *head;
	int count = 0;

	head = h;

	while (head != NULL)
	{
		head = head->next;
		count++;
	}
	return (count);
}

/**
 * insertion_sort_list - Sort a list with the insertion sort algorithm
 *
 * @list: Pointer to the node of the head of the list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	int x;
	size_t i, j, size = len_dlistint(*list);
	listint_t *curr, *prev;
	
	for (i = 1; i < size; i++)
	{
		for (j = i; j > 0; j--)
		{
			curr = get_at_index(*list, j);
			prev = get_at_index(*list, j - 1);
			
			if (curr->n < prev->n)
			{
				x = curr->n;
				curr->n = prev->n;
				prev->n = x;
				print_list(*list);
			}
			else
			{
				break;
			}
		}
	}
}
