#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * is_palindrome - checks if a singly linked list is a palindrome.
 * @head: pointer to pointer of head of list
 * Return: 0 if it is not a palindrome, 1 if it is a palindrome
 */
int is_palindrome(listint_t **head)
{
	listint_t *current = *head;
	int n = 0, i = 0, j = 0, x = 0;
	int *arr;

	if (current == NULL)
		return (1);
	while (current != NULL)
	{
		current = current->next;
		n++;
	}
	current = *head;
	arr = malloc(sizeof(int) * n);
	while (current != NULL)
	{
		arr[i] = current->n;
		current = current->next;
		i++;
	}
	x = n - 1;
	current = *head;
	while (current != NULL)
	{
		if (arr[j] == arr[x])
		{
			current = current->next;
			j++, x--;
		}
		else
			return (0);
	}
	return (1);
}
