#include "lists.h"

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

size_t print_list(const list_t *h)
{

size_t size;
size = 0;

while (h != NULL)
{
size = size + 1;
if (h->str == NULL)
printf("[%d] nil\n", 0);
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
return (size);
}
