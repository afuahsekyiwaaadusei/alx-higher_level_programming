#include "lists.h"


/**
 * check_cycle - checks if there's a cycle in the list
 * @list : pointer to the list to be checked.
 * Return: 0 if there is no cycle, 1 if there is a cycle.
 */
int check_cycle(listint_t *list)
{
        listint_t *fast  = list;
	listint_t *slow = list;

        while (fast != NULL && fast->next != NULL)
        {
                fast = fast->next->next;
                slow = slow->next;
                if (slow == fast)
                        return (1);
        }
        return (0);
}
