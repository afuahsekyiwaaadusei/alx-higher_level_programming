#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_node - inserts a number in a sorted singly linked list
 * @head: pointer to head of list
 * @number: value to be inserted
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current;
	listint_t *new;
	listint_t *next;

	current = *head;
	new = malloc(sizeof(listint_t));
	next = malloc(sizeof(listint_t));
	if (new == NULL || next == NULL)
		return (NULL);
	new->next = NULL;
	new->n = number;
	if (*head == NULL || current->n > number)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (current->next != NULL)
	{
		if (current->next->n > number)
		{
			new->next = current->next;
			current->next = new;
			return (new);
		}
		current = current->next;
	}
	current->next = new;
	return (new);
}

