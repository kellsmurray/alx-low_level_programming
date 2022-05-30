#include "lists.h"

/**
 * pop_listint - deletes head node and return node's data
 * @head: head of linked list
 * Return: node data (integer)
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

temp = *head;

if (*head == NULL)
return (0);

*head = temp->next;
n = temp->n;
free(temp);
return (n);
}
