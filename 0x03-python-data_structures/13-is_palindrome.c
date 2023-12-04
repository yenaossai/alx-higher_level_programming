#include "lists.h"
#include <stddef.h>

/**
 * reverse_list - Reverses a linked list in place.
 * @head: Pointer to the head of the linked list.
 * Return: Pointer to the new head of the reversed list.
 */
listint_t *reverse_list(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return *head;
}

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: Pointer to the head of the linked list.
 * Return: 1 if it is a palindrome, 0 otherwise.
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow = *head;
	listint_t *fast = *head;
	listint_t *second_half = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	
	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
	}

	
	second_half = reverse_list(&slow);

	
	while (*head != NULL && second_half != NULL)
	{
		if ((*head)->n != second_half->n)
			return (0);

		*head = (*head)->next;
		second_half = second_half->next;
	}

	return (1);
}
