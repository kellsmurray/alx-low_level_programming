#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: head of linked list
 * Return: number of list elements
 */

size_t list_len(const list_t *h)
{
size_t size;
size = 0;

while (h != NULL)
{
size++;
h = h->next;
}
return (size);

}
