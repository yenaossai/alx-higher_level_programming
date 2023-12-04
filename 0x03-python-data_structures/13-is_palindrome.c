#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
*add_nodeint - adds a new node at the beginning of a listint_t list
*@head: head of listint_t
*@n: int to add in listint_t list
*Return: address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

/**
*is_palindrome - identify if a syngle linked list is palindrome
*@head: head of listint_t
*Return: 1 if it is palindrome else 0
*/
int is_palindrome(listint_t **head)
{
	listint_t *reversedList = NULL;
	listint_t *current = *head;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	while (current != NULL)
	{
		add_nodeint(&reversedList, current->n);
		current = current->next;
	}

	current = *head;
	while (current != NULL)
	{
		if (current->n != reversedList->n)
		{
			free_listint(reversedList);
			return (0);
		}
		current = current->next;
		reversedList = reversedList->next;
	}

	free_listint(reversedList);
	return (1);
}
