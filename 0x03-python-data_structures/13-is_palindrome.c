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
	listint_t *slow = *head;
	listint_t *fast = *head;
	listint_t *current = *head;
	listint_t *prev_of_slow = NULL, *middle = NULL;
	int result = 0;

	if (current == NULL)
		return (1);
	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		prev_of_slow = slow;
		slow = slow->next;
	}
	if (fast != NULL)
	{
		middle = slow;
		slow = slow->next;
	}
	isReverse(&slow);
	result = isCompare(current, slow);
	isReverse(&slow);

	if (middle)
		middle->next = slow;
	else
		prev_of_slow->next = slow;
	return (result);

}

/**
 * isReverse - reverse a linked list
 * @head: first node
 * Return: the first node of the reversed function
 */
void isReverse(listint_t **head)
{
	listint_t *current = *head;
	listint_t *prev = NULL, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
}

/**
 * isCompare - compare two linked list
 * @first: first list
 * @second: second list
 * Return: 0 if the lists are unequal and 1 otherwise.
 */
int isCompare(listint_t *first, listint_t *second)
{
	while (first != NULL && second != NULL)
	{
		if (first->n != second->n)
			return (0);
		first = first->next;
		second = second->next;
	}
	return (1);
}
